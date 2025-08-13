/**/
#include <stdio.h>
#include <string.h>
 main() {
    char sentence[200];
    char longest[50] = "";
    char current[50] = "";
    int i = 0, j = 0, wordCount = 0;
    
    printf("Enter a sentence: ");
    gets(sentence);

    while (1) {
        if (sentence[i] != '\0' && !isspace(sentence[i])) {
            current[j++] = sentence[i];  
        } else {
            if (j > 0) {
                current[j] = '\0'; 
                wordCount++;

                
                if (strlen(current) > strlen(longest)) {
                    strcpy(longest, current);
                }
                j = 0; 
            }

            if (sentence[i] == '\0')
                break; 
        }
        i++;
    }

    printf("\nTotal words: %d", wordCount);
    printf("\nLongest word: %s", longest);
    printf("\nLength of longest word: %zu\n", strlen(longest));

    return 0;
}

