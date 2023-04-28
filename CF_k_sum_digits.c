// Given a number N and an array A of N digits (not separated by space). Print the summation of these digits.

// Input
// First line contains a number N (1  ≤  N  ≤  106) number of digits.

// Second line contains N digits (0 ≤ Ai ≤ 9).

#include<stdio.h>
int main()
{
    int n, sum_val = 0;
    char a[1000000];
    scanf("%d", &n);
    scanf("%s", a);
    for (int i = 0; i < n; i++)
    {
        int value = a[i] - '0';
        sum_val = sum_val + value;
    }
    printf("%d", sum_val);
    return 0;
}
