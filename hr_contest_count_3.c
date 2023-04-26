// You will be given a string S as input. The string will contain only English small alphabets and will not contain any spaces. You need to tell how many time each alphabets from a to z appears.
#include<stdio.h>
#include<string.h>
int main()
{
    char s[1001];
    scanf("%s", s);
    int value_count[26] = {0};
    for (int i = 0; i < strlen(s); i++)
    {
        int value = s[i]-'a';
        value_count[value]++;

    }
    for (int i = 0; i < 26; i++)
    {
        printf("%c - %d\n",i + 'a', value_count[i]);
    }
    
    
    return 0;
}