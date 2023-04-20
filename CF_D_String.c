#include<stdio.h>
#include<string.h>
int main()
{
    char a[11];
    char b[11];
    scanf("%s%s", &a, &b);
    // lemgth of two string
    printf("%d %d\n", strlen(a), strlen(b));
    // concatenation
    char Concated_string[21];
    for (int i = 0; i < strlen(a); i++)
    {
        Concated_string[i] = a[i];
    }
    for (int i = 0; i < strlen(Concated_string); i++)
    {
        Concated_string[strlen(a)+i] = b[i];
    }
    printf("%s\n", Concated_string);

// interchanging two values
    char temp[1];
    temp[0] = a[0];
    a[0] = b[0];
    b[0] = temp[0];
    printf("%s %s", a, b);
    return 0;
}