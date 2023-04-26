// Suppose there are M1 workers who can complete a work in D days. Unfortunately, some of them became sick before the start of the work, and now there are M2 workers. Can you tell how many days it will take for them to complete the work?

// // Note: If the answer is a floating value, print the integer part of the answer.

#include<stdio.h>
int main()
{
    int M1, M2, D;
    scanf("%d %d %d", &M1, &M2, &D);
    int number_of_days = (M1*D)/M2;
    printf("%d", number_of_days);
    return 0;
}