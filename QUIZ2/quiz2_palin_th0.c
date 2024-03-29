#include <stdio.h>
#include <string.h>

int main(){
    char str[100];
    int i, j, len, isPalindrome;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Remove newline character from the input string
    len = strlen(str);
    if (str[len - 1] == '\n') {
        str[len - 1] = '\0';
    }

    len = strlen(str);
    isPalindrome = 1;

    // Check if the string is a palindrome
    for (i = 0, j = len - 1; i < j; i++, j--) {
        if (str[i] != str[j]) {
            isPalindrome = 0;
            break;
        }
    }

    if (isPalindrome) {
        printf("The string is a palindrome.\n");
    } else {
        printf("The string is not a palindrome.\n");
    }

    return 0;
}