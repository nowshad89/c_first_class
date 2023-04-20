#include<stdio.h>
int main()
{
    char s[1001];
    char t[1001];
    scanf("%s%s", s, t);
    int t_count = 0;
    int s_count = 0;
    for (int i = 0; s[i] != '\0'; i++)
    {
        t_count++;
    }
    for (int i = 0; t[i] != '\0'; i++)
    {
        s_count++;
    }
    printf("%d %d\n", t_count, s_count);
    printf("%s %s\n", s,t);

    
    return 0;
}