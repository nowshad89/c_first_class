// You will be given a string S. The string will contain both small and capital English alphabets only. You need to tell how many of them are capital alphabets and how many are small alphabets.
#include<stdio.h>
#include<string.h>
int main()
{
    char s[1001];
    scanf("%s", s);
    int capital_count = 0, small_count = 0;
    for (int i = 0; i < strlen(s); i++)
    {
        if (s[i] >= 'a' && s[i] <= 'z')
        {
            small_count++;

        }
        else if (s[i] >= 'A' && s[i] <= 'Z')
        {
            capital_count++;
        }

        
    }
    printf("%d %d\n",capital_count, small_count);
    
    return 0;
}