// program to demonstrate the use of various string operations
#include <stdio.h>
#include <string.h>

int main() {
    char str1[50], str2[50], temp[50];
    
    // Input two strings
    printf("Enter the first string: ");
    scanf("%s", str1);

    printf("Enter the second string: ");
    scanf("%s", str2);

    // String length
    printf("\n1. String Length:\n");
    printf("Length of string 1: %lu\n", strlen(str1));
    printf("Length of string 2: %lu\n", strlen(str2));

    // String copy
    printf("\n2. String Copy:\n");
    strcpy(temp, str1);
    printf("Copied string from str1 to temp: %s\n", temp);

    // String concatenation
    printf("\n3. String Concatenation:\n");
    strcat(temp, str2);
    printf("Concatenated string: %s\n", temp);

    // String comparison
    printf("\n4. String Comparison:\n");
    if (strcmp(str1, str2) == 0)
        printf("String 1 and String 2 are equal.\n");
    else
        printf("String 1 and String 2 are not equal.\n");

    // String searching
    printf("\n5. String Searching:\n");
    char substring[20];
    printf("Enter a substring to search: ");
    scanf("%s", substring);
    
    if (strstr(str1, substring) != NULL)
        printf("'%s' is present in '%s'\n", substring, str1);
    else
        printf("'%s' is not present in '%s'\n", substring, str1);

    return 0;
}
