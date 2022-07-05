#include <stdio.h>
#include <string.h>
#define MAX_SIZE 100 // Maximum string size

int main()
{
    char str[100], reverse[100];
    int len, i, index, start, end;

    printf("Enter any string: ");
    gets(str);

    len   = strlen(str);
    index = 0;

    // Start checking of words from the end of string
    start = len - 1;
    end   = len - 1;

    while(start > 0)
    {
        // If a word is found
        if(str[start] == ' ')
        {
            // Add the word to the reverse string
            i = start + 1;
            while(i <= end)
            {
                reverse[index] = str[i];

                i++;
                index++;
            }
            reverse[index++] = ' ';

            end = start - 1;
        }

        start--;
    }

    // Finally add the last word
    for(i=0; i<=end; i++)
    {
        reverse[index] = str[i];
        index++;
    }

    // Add NULL character at the end of reverse string
    reverse[index] = '\0'; 

    printf("Original string \n%s\n\n", str);
    printf("Reverse ordered words \n%s", reverse);

    return 0;
}