#include <iostream>
using namespace std;
class Calculator {
public:

    double add(double a, double b) {
        return a + b;
    }

    double subtract(double a, double b) {
        return a - b;
    }

    double multiply(double a, double b) {
        return a * b;
    }

    double divide(double a, double b) {
        if (b != 0)
            return a / b;
        else {
            cout << "Error! Division by zero." << endl;
            return 0;
        }
    }
};

int main() {
    Calculator c1;   
    double x, y;
    
    cout << "Enter two numbers: ";
    cin >> x >> y;

    cout << "Addition: " << c1.add(x, y) << endl;
    cout << "Subtraction: " << c1.subtract(x, y) << endl;
    cout << "Multiplication: " << c1.multiply(x, y) << endl;
    cout << "Division: " << c1.divide(x, y) << endl;

    return 0;
}

