// Given 2 numbers N
// , M
//  and an array A
//  of N
//  numbers. For every number from 1 to M
// , print how many times this number appears in this array.

// test case 
// inputCopy
// 10 5
// 1 2 3 4 5 3 2 1 5 3
// outputCopy
// 2
// 2
// 3
// 1
// 2

#include<stdio.h>
int main()
{
    int n, m;
    scanf("%d%d", &n, &m);
    int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    int count[100001] = {0};
    for (int i = 0; i < n; i++)
    {
        int value = a[i];
        count[value]++;
    }
    for (int i = 1; i <= m; i++)
    {
         printf("%d\n", count[i]);    
    }
    return 0;
}
// // printf("%d\n", count[i]);
        // if (count[i] != 0)
        // {
        //     printf("%d\n", count[i]);
        // }