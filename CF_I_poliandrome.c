#include<stdio.h>
#include<string.h>
int main()
{
    char s[1001];
    scanf("%s", &s);
    int s_length = strlen(s);
    int ans = 0;
    for (int i = 0; i < s_length; i++)
    {
        if (s[i] != s[s_length-i-1])
        {
            ans = 1;
            break;
        }
        
    }
    if (ans)
    {
        printf("NO");
    }
    else
    {
        printf("YES");
    }
    
    return 0;
}