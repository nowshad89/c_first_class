#include <stdio.h>
#include <limits.h>
int main()
{
    int n;
    scanf("%d", &n);
    int a[n], min = INT_MAX, max = INT_MIN, min_pos = 0, max_pos = 0;
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
        if (max < a[i])
        {
            max = a[i];
        }
        if (a[i] < min)
        {
            min = a[i];
        }    
    }
    for (int i = 0; i < n; i++)
    {
        if (a[i] == min)
        {
            min_pos = i;
        }
        if (a[i] == max)
        {
            max_pos = i;
        }
    }
    a[min_pos] = max;
    a[max_pos] = min;
    for (int i = 0; i < n; i++)
    {
        printf("%d ", a[i]); 
    }
    return 0;
}