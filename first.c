// c programming first classs


// #include<stdio.h>
// int main()
// {
//     printf("ello");
//     return 0;
// }

// ////////////////////////////////////////// FIRST MODULE /////////////////////////////////
// 1) structure for c programming
// 2) how to see output in c programming
// 3) variable and datatype descriotion
// 4) how to take input in c programming
// 5) how to name a variable and some rules to declare variable
// 6) limitations of datatype

// basic structure of c programming. two parsts- Head and Body
// in head- brains or header file exists for the entire program
// in body- all the rest of the codes

// stdio stands for standard input and output and that is used for printf and to take input fron user
// how function works
// lots of function may have in a c program.whicj=h one work first? int main() is used to say you execute first
//  semi collon is must for every statement
// 
// first program in c(module 1)

// there are some special charecter that cant be print like back slash,in that case you have to put double back slesh
// printf("\\") same here for &&
// \t for 4 space in texts, \\t for 8 space

// #include<stdio.h>
// int main()
// {
//     printf("hello world \n");
//     printf("now i am a programmer");
//     printf("\\");
//     printf("&&");
//     return 0;
// }

// ///////////////////////////////data type//////////////////////////////////////
// int float char bool 
// = assignment operator
// format specifier % used as %d, %f, %c for printing certian type of data

// #include<stdio.h>
// int main()
// {
//     int rahim = 10;
//     float karim = 10.34343434;
//     char abul = 'k';
//     printf("%0.3f \n", karim);
//     printf("%d \n", rahim);
//     printf("%c", abul);

// }

// why we need to take input(scanf)-----------
// & is used to locate, it is named adress of
// #include<stdio.h>
// int main()
// {
//     // int rahim, karim;
//     // scanf("%d %d", &rahim, &karim);
//     // printf("%d %d", rahim, karim);

//     int a, b;
//     scanf("%d%% %d%%", &a, &b);
//     printf("%d%% %d%%", a, b);

// }

// limitations of datatype
// int type take 4 byte.if we use long long it will take 8 bite.which is same for float type data.but for float its double which takes 8 byte data

// 1 bit means either 0 or 1
// 2^n - 1
// 4 byte = 32bit that means -2^32 to 2^32 - 1 number canbe taken by integer..cause int takes 4byte
// -10^9 to 10^9
// long long is for 8byte = 64 bit that means -2^64 to 2^64 - 1 number canbe taken by lon long integer..cause int takes 4byte
// -10^18 to 10^18
// same here for float but here you have to use double and %lf for long float

// #include<stdio.h>
// int main()
// {
//     long long int b = 100000000000000;
//     double c = 3.4444444444
//     printf("%lld", b);
//     printf("%lf", c);
// }


// logical operator 1) logcal and(&&) 2) logical or (||)
// conditional stament
// #include<stdio.h>
// int main()
// {
//     int taka;
//     scanf("%d", &taka);
//     if(taka >= 100)
//     {
//         printf("burger khabo");
//     }
//     else
//     {
//         printf("burger jindegote khaitamna");
//     }
//     return 0;
// }

//if else ledder in c(else if thakle that is called if else ledder)
// #include<stdio.h>
// int main()
// {
//     int taka;
//     scanf("%d", &taka);
//     if(taka >= 100)
//     {
//         printf("burger");
//     }
//     else if(taka >= 50)
//     {
//         printf("fuchka khab0");

//     }
//     else
//     {
//         printf("kiccchu khaitamna");
//     }
// } 

// nested else if
// #include<stdio.h>
// int main()
// {
//     int taka;
//     scanf("%d", &taka);
//     if (taka >= 5000)
//     {
//         printf("cox jabo\n");
//         if(taka >= 10000)
//         {
//             printf("saintmartin jabo\n");
//         }
//         else
//         {
//             printf("saint jabo na\n");
//         }
//     }
//     else
//     {
//         printf("cox jabo na\n");
//     }
    
//     return 0;
// }

// practice problem

// number 1
// #include<stdio.h>
// int main()
// {
//     printf("Recently I heard that you’ve achieved\n95%% marks in your exam.\nThis is brilliant!\nI wish you’ll shine in your life!\tGood\nluck with all the barriers(/\\) in your life.");
//     return 0;
// }

// number 2
// #include<stdio.h>
// int main()
// {
//     int a;
//     int b;
//     scanf("%d", &a);
//     scanf("%d", &b);
//     printf("%d + %d = %d\n",a, b, a+b);
//     printf("%d - %d = %d\n",a, b, a-b);
//     printf("%d * %d = %d\n",a, b, a*b);
//     printf("%d / %d = %0.2f\n",a, b, a*1.0/b);
//     return 0;
// }

// problem 3
// You need to take one non-negative integer (0 or greater than 0) value as input and tell if it is even or odd.See the sample input and output for more clarification.

// #include<stdio.h>
// int main()
// {
//     int a;
//     scanf("%d", &a);
//     if(a % 2 == 0)
//     {
//         printf("even");
//     }
//     else
//     {
//         printf("odd");
//     }
//     return 0;
// }

// problem 4
// You need to take one integer value as input and tell if the value is positive or negative or zero.See the sample input and output for more clarification.

// #include<stdio.h>
// int main()
// {
//     int a;
//     scanf("%d", &a);
//     if (a > 0)
//     {
//         printf("positive");
//     }
//     else if(a < 0)
//     {
//         printf("negative");
//     }
//     else{
//         printf("zero");
//     }
//     return 0;
// }

//problem 5
//  Suppose your friend has told you that she will buy a Gucci Bag if she has 10 thousand taka or more. Otherwise if she has 5 thousand taka or more, she will buy a Levis Bag. Otherwise she will buy Something from New Market. She also told you that, if she could buy the Gucci bag and she has more than 20 thousand taka she will also buy a Gucci Belt.

// Now, if you know the amount of money she has, can you tell which item/items she will buy?
// See the sample input and output for more clarification.

#include<stdio.h>
int main()
{
    int a;
    scanf("%d", &a);
    if(a >=10000)
    {
        printf("Gucchi Bag\n");
        if(a > 20000)
        {
            printf("Gucchi Belt");
        }
    }
    else if(a >= 5000)
    {
        printf("Levis Bag");
    }
    else{
        printf("Something");
    }
    return 0;
}


