// insert a value in c
#include<stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int ar[n + 1];
    // taking input from the array
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &ar[i]);
    }
    int pos, val;
    scanf("%d%d", &pos, &val);
    // sending the values from left to right
    for (int i = n; i >= pos+1; i--)
    {
        ar[i] = ar[i-1];
    }
    ar[pos] = val;
    // printing the final array
    for (int i = 0; i < n+1; i++)
    {
        printf("%d ", ar[i]);
    } 
    return 0;
}