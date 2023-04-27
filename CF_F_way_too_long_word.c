// Given a string S. Print the origin string if it's not too long otherwise, print the special abbreviation.

// Note: The string is called too long, if its length is strictly more than 10 characters. If the string is too long then you have to print the string in the following manner:

// Print the first character in the string.
// Print number of characters between the first and the last characters.
// Print the last character in the string.
// For example: "localization" will be "l10n", and "internationalization" will be "i18n".


#include<stdio.h>
#include<string.h>
int main()
{
    int n;
    scanf("%d", &n);
    char a[n][101];
    for (int i = 0; i < n; i++)
    {
        scanf("%s", &a[i]);
    }
    
    for (int i = 0; i < n; i++)
    {
        int value = strlen(a[i]);
        if (value <= 10)
        {
            printf("%s\n", a[i]);
        }
        else
        {
            printf("%c%d%c\n", a[i][0], value-2, a[i][value -1]);
        }
        
    }
    return 0;
}