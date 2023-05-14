#include<stdio.h>
int main()
{
    char strFirst[20] = "I am Human";
    char strSecond[20] ;
    int  length=0, j;

    while (strFirst[length] != '\0' )
    {
        length++;
    }

    for(j=0; length>=0; length--, j++)
    {
        strSecond[j] = strFirst[length-1];
    }

    printf("first string : %s \n", strFirst);
    printf("Reverse string : %s", strSecond);
    return 0;
}
/*#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main() {
    char str[100];
    int vowels = 0, consonants = 0, digits = 0, words = 0, others = 0;
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin); // read input from user

    for (int i = 0; i < strlen(str); i++) {
        if (isalpha(str[i])) { // check if it's an alphabet
            if (tolower(str[i]) == 'a' || tolower(str[i]) == 'e' || tolower(str[i]) == 'i' ||
                tolower(str[i]) == 'o' || tolower(str[i]) == 'u') {
                vowels++; // increment vowel count
            } else {
                consonants++; // increment consonant count
            }
        } else if (isdigit(str[i])) { // check if it's a digit
            digits++; // increment digit count
        } else if (isspace(str[i])) { // check if it's a whitespace
            words++; // increment word count
        } else {
            others++; // increment other character count
        }
    }

    printf("Vowels: %d\n", vowels);
    printf("Consonants: %d\n", consonants);
    printf("Digits: %d\n", digits);
    printf("Words: %d\n", words+1); // +1 because the last word doesn't have whitespace after it
    printf("Other characters: %d\n", others);

    return 0;
}*/








































































/*#include <stdio.h>

int main() {
    int arr[5] = {10, 20, 30, 40, 50};
    int *ptr;

    // Point the pointer to the first element of the array
    ptr = &arr[0];

    // Access array elements using pointers
    printf("Array elements using pointers: ");
    for(int i=0; i<5; i++) {
        printf("%d ", *(ptr+i));
    }

    return 0;
}*/


/*Fibonacci Sequence
#include <stdio.h>

int main() {
    int n, i;
    printf("Enter the number of terms for the Fibonacci sequence: ");
    scanf("%d", &n);
    int fib[n];

    // First two terms are always 0 and 1
    fib[0] = 0;
    fib[1] = 1;

    // Generate the Fibonacci sequence using an array
    for (i = 2; i < n; i++) {
        fib[i] = fib[i-1] + fib[i-2];
    }

    // Print the Fibonacci sequence
    printf("The Fibonacci sequence for %d terms:\n", n);
    for (i = 0; i < n; i++) {
        printf("%d ", fib[i]);
    }
    printf("\n");

    return 0;
}*/
/*2D Array
#include <stdio.h>

int main() {
    int row, col;
    printf("Enter the number of rows: ");
    scanf("%d", &row);
    printf("Enter the number of columns: ");
    scanf("%d", &col);

    // Declare a 2D array with the given number of rows and columns
    int arr[row][col];

    // Initialize the 2D array with user input
    for(int i=0; i<row; i++) {
        for(int j=0; j<col; j++) {
            printf("Enter element [%d][%d]: ", i, j);
            scanf("%d", &arr[i][j]);
        }
    }

    // Print the 2D array
    printf("The 2D array is:\n");
    for(int i=0; i<row; i++) {
        for(int j=0; j<col; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n"); // Move to new line after every row
    }

    return 0;
}*
/* Max and Min Of an Array
#include <stdio.h>

int main() {
    int arr[100], n, i, max, min;

    printf("Enter the size of array: ");
    scanf("%d", &n);

    printf("Enter %d elements in the array:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    max = arr[0]; // initialize max to the first element of the array
    min = arr[0]; // initialize min to the first element of the array

    for (i = 1; i < n; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
        if (arr[i] < min) {
            min = arr[i];
        }
    }

    printf("Maximum element in the array is: %d\n", max);
    printf("Minimum element in the array is: %d\n", min);

    return 0;
}*/
