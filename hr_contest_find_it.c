// You will given an integer array A and the size N. You will also be given an integer value X. You need to tell how many times X was appeared in the array.

#include<stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int a[1000];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    int x, number_of_x = 0;
    scanf("%d", &x);
    for (int i = 0; i < n; i++)
    {
        if (a[i] == x)
        {
            number_of_x++;
        }
        
    }
    printf("%d", number_of_x);
    
    
    return 0;
}