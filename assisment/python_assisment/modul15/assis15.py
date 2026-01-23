from tkinter import *
from tkinter import messagebox
import sqlite3
from datetime import date, timedelta
import os
import re

# ------------------ DATABASE SETUP ------------------
def connect_db():
    conn = sqlite3.connect("library.db")
    cur = conn.cursor()
    # Books table
    cur.execute("""
    CREATE TABLE IF NOT EXISTS books(
        id INTEGER PRIMARY KEY AUTOINCREMENT,
        title TEXT,
        author TEXT,
        genre TEXT,
        available INTEGER
    )
    """)
    # Members table
    cur.execute("""
    CREATE TABLE IF NOT EXISTS members(
        id INTEGER PRIMARY KEY AUTOINCREMENT,
        name TEXT,
        email TEXT,
        role TEXT
    )
    """)
    # Borrow table
    cur.execute("""
    CREATE TABLE IF NOT EXISTS borrow(
        id INTEGER PRIMARY KEY AUTOINCREMENT,
        member_id INTEGER,
        book_id INTEGER,
        issue_date TEXT,
        return_date TEXT
    )
    """)
    conn.commit()
    conn.close()

# ------------------ MEMBER MANAGEMENT ------------------
def add_member():
    name = member_name_var.get().strip()
    email = member_email_var.get().strip()
    role = member_role_var.get().strip()

    if name=="" or email=="" or role=="":
        messagebox.showerror("Error", "Fill all member fields!")
        return

    conn = sqlite3.connect("library.db")
    cur = conn.cursor()
    cur.execute("INSERT INTO members(name,email,role) VALUES(?,?,?)",(name,email,role))
    conn.commit()
    conn.close()
    member_name_var.set("")
    member_email_var.set("")
    member_role_var.set("")
    show_members()

def show_members():
    member_listbox.delete(0, END)
    conn = sqlite3.connect("library.db")
    cur = conn.cursor()
    cur.execute("SELECT * FROM members")
    rows = cur.fetchall()
    conn.close()
    for r in rows:
        member_listbox.insert(END, r)

# ------------------ BOOK MANAGEMENT ------------------
def add_book():
    title = book_title_var.get().strip()
    author = book_author_var.get().strip()
    genre = book_genre_var.get().strip()

    if title=="" or author=="" or genre=="":
        messagebox.showerror("Error", "Fill all book fields!")
        return

    conn = sqlite3.connect("library.db")
    cur = conn.cursor()
    cur.execute("INSERT INTO books(title,author,genre,available) VALUES(?,?,?,?)",
                (title,author,genre,1))
    conn.commit()
    conn.close()
    book_title_var.set("")
    book_author_var.set("")
    book_genre_var.set("")
    show_books()

def show_books():
    book_listbox.delete(0, END)
    conn = sqlite3.connect("library.db")
    cur = conn.cursor()
    cur.execute("SELECT * FROM books")
    rows = cur.fetchall()
    conn.close()
    for r in rows:
        avail = "Yes" if r[4]==1 else "No"
        book_listbox.insert(END, (r[0],r[1],r[2],r[3],avail))

# ------------------ BORROW / RETURN ------------------
def borrow_book():
    if not member_listbox.curselection() or not book_listbox.curselection():
        messagebox.showerror("Error", "Select member and book!")
        return
    member_id = member_listbox.get(member_listbox.curselection())[0]
    book_data = book_listbox.get(book_listbox.curselection())
    book_id = book_data[0]
    if book_data[4]=="No":
        messagebox.showerror("Error","Book is not available!")
        return
    issue_date = date.today()
    return_date = issue_date + timedelta(days=7)
    conn = sqlite3.connect("library.db")
    cur = conn.cursor()
    cur.execute("INSERT INTO borrow(member_id,book_id,issue_date,return_date) VALUES(?,?,?,?)",
                (member_id,book_id,str(issue_date),str(return_date)))
    cur.execute("UPDATE books SET available=0 WHERE id=?",(book_id,))
    conn.commit()
    conn.close()
    show_books()
    messagebox.showinfo("Borrowed","Book borrowed successfully!")

def return_book():
    if not book_listbox.curselection():
        messagebox.showerror("Error","Select book to return!")
        return
    book_data = book_listbox.get(book_listbox.curselection())
    book_id = book_data[0]
    conn = sqlite3.connect("library.db")
    cur = conn.cursor()
    # get return date
    cur.execute("SELECT * FROM borrow WHERE book_id=? ORDER BY id DESC LIMIT 1",(book_id,))
    record = cur.fetchone()
    if not record:
        messagebox.showerror("Error","This book was not borrowed!")
        conn.close()
        return
    due_date = date.fromisoformat(record[4])
    today = date.today()
    fine = max(0,(today-due_date).days*5)
    # update book availability
    cur.execute("UPDATE books SET available=1 WHERE id=?",(book_id,))
    conn.commit()
    conn.close()
    show_books()
    messagebox.showinfo("Returned",f"Book returned!\nFine: ₹{fine}")
    # save invoice
    save_invoice(record[1],book_id,fine)

def save_invoice(member_id, book_id, fine):
    conn = sqlite3.connect("library.db")
    cur = conn.cursor()
    cur.execute("SELECT name FROM members WHERE id=?",(member_id,))
    member_name = cur.fetchone()[0]
    cur.execute("SELECT title FROM books WHERE id=?",(book_id,))
    book_title = cur.fetchone()[0]
    conn.close()
    if not os.path.exists("data/invoices"):
        os.makedirs("data/invoices")
    filename = f"data/invoices/{member_name}_{book_title}.txt"
    with open(filename,"w") as f:
        f.write(f"Member: {member_name}\nBook: {book_title}\nFine: ₹{fine}\n")

# ------------------ SEARCH ------------------
def search_books_gui():
    keyword = search_var.get().strip()
    book_listbox.delete(0,END)
    conn = sqlite3.connect("library.db")
    cur = conn.cursor()
    cur.execute("SELECT * FROM books")
    rows = cur.fetchall()
    conn.close()
    pattern = re.compile(keyword,re.IGNORECASE)
    for r in rows:
        if pattern.search(r[1]) or pattern.search(r[2]) or pattern.search(r[3]):
            avail = "Yes" if r[4]==1 else "No"
            book_listbox.insert(END,(r[0],r[1],r[2],r[3],avail))

# ------------------ GUI ------------------
root = Tk()
root.title("LibraDesk Mini")
root.geometry("1000x600")

# Member Management
member_name_var = StringVar()
member_email_var = StringVar()
member_role_var = StringVar(value="Librarian")

Label(root,text="Member Name").grid(row=0,column=0)
Entry(root,textvariable=member_name_var).grid(row=0,column=1)
Label(root,text="Email").grid(row=1,column=0)
Entry(root,textvariable=member_email_var).grid(row=1,column=1)
Label(root,text="Role").grid(row=2,column=0)
Entry(root,textvariable=member_role_var).grid(row=2,column=1)
Button(root,text="Add Member",command=add_member).grid(row=3,column=0)
Button(root,text="Show Members",command=show_members).grid(row=3,column=1)

member_listbox = Listbox(root,width=50)
member_listbox.grid(row=4,column=0,columnspan=2,pady=10)

# Book Management
book_title_var = StringVar()
book_author_var = StringVar()
book_genre_var = StringVar()
search_var = StringVar()

Label(root,text="Book Title").grid(row=0,column=3)
Entry(root,textvariable=book_title_var).grid(row=0,column=4)
Label(root,text="Author").grid(row=1,column=3)
Entry(root,textvariable=book_author_var).grid(row=1,column=4)
Label(root,text="Genre").grid(row=2,column=3)
Entry(root,textvariable=book_genre_var).grid(row=2,column=4)
Button(root,text="Add Book",command=add_book).grid(row=3,column=3)
Button(root,text="Show Books",command=show_books).grid(row=3,column=4)

Label(root,text="Search Book").grid(row=5,column=3)
Entry(root,textvariable=search_var).grid(row=5,column=4)
Button(root,text="Search",command=search_books_gui).grid(row=5,column=5)

book_listbox = Listbox(root,width=80)
book_listbox.grid(row=6,column=3,columnspan=3,pady=10)

# Borrow / Return Buttons
Button(root,text="Borrow Book",command=borrow_book).grid(row=7,column=3,pady=10)
Button(root,text="Return Book",command=return_book).grid(row=7,column=4,pady=10)

# Initialize DB and show data
connect_db()
show_members()
show_books()

root.mainloop()
