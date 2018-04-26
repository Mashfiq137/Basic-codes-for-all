#include <stdio.h>
#include <string.h>
#define MAX_SIZE 100 // Maximum string size

int main()
{
    char str[MAX_SIZE];

    /* Input string from user */
    printf("Enter any string: ");
    gets(str);

    printf("Original string = %s\n", str);

    /* Find the reverse of string */
    strrev(str);

    printf("Reverse string = %s", str);

    return 0;
}
