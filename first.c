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

// if else ledder in c(else if thakle that is called if else ledder)
//  #include<stdio.h>
//  int main()
//  {
//      int taka;
//      scanf("%d", &taka);
//      if(taka >= 100)
//      {
//          printf("burger");
//      }
//      else if(taka >= 50)
//      {
//          printf("fuchka khab0");

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

// problem 5
//   Suppose your friend has told you that she will buy a Gucci Bag if she has 10 thousand taka or more. Otherwise if she has 5 thousand taka or more, she will buy a Levis Bag. Otherwise she will buy Something from New Market. She also told you that, if she could buy the Gucci bag and she has more than 20 thousand taka she will also buy a Gucci Belt.

// Now, if you know the amount of money she has, can you tell which item/items she will buy?
// See the sample input and output for more clarification.

// #include<stdio.h>
// int main()
// {
//     int a;
//     scanf("%d", &a);
//     if(a >=10000)
//     {
//         printf("Gucchi Bag\n");
//         if(a > 20000)
//         {
//             printf("Gucchi Belt");
//         }
//     }
//     else if(a >= 5000)
//     {
//         printf("Levis Bag");
//     }
//     else{
//         printf("Something");
//     }
//     return 0;
// }

// ///////////////////////////////////////// module 3/////////////////////////////////
// loop (initialization condition increment/decrement)
// #include<stdio.h>
// int main()
// {
//     int i;
//     for(i = 10; i <= 14; i = i+1)
//     {
//         printf("hellow\n");
//     }
//     return 0;
// }

// while loop
// #include<stdio.h>
// int main()
// {
//     int i;
//     i = 0;
//     while (i<=3)
//     {
//         i++;
//         printf("hellow\n");
//         printf("%d\n", i);

//     }

//     return 0;
// }
// do wile loop
// #include<stdio.h>
// int main()
// {
//     int i = 0;

//     do
//     {
//         i++;
//         printf("hellow\n");
//         printf("%d\n", i+1);

//     }
//     while (i <= 3);

//     return 0;
// }

// ctrl + c to stop infinity loop
// be careful about char type data and follow the following code
// #include<stdio.h>
// int main()
// {
//     int A;
//     long long int B;
//     float C;
//     char D;
//     scanf("%d", &A);
//     scanf("%lld", &B);
//     scanf("%f", &C);
//     scanf(" %c", &D);
//     printf("%d\n",A);
//     printf("%lld\n",B);
//     printf("%0.2f\n",C);
//     printf("%c", D);
//     return 0;
// }

// #include<stdio.h>
// int main()
// {
//     int N;
//     scanf("%d", &N);
//     int i;
//     for(i=1;i<=N;i++)
//     {
//         if(i % 5==0)
//         {
//             printf("%d ",i);
//             printf("Yes\n");
//         }
//         else
//         {
//             printf("%d ", i);
//             printf("No\n");
//         }
//     }
//     return 0;
// }
// #include<stdio.h>
// int main()
// {
//     printf("Hello, world! I am learning C programming language. ^_^\n");
//     printf("Programming is fun and challenging. /\\/\\/\\\n");
//     printf("I want to give my 100%% dedication to learn!");
//     printf("\tI will succeed one day.\n");
//     return 0;
// }
// #include<stdio.h>
// int main()
// {
//     int N;
//     scanf("%d", &N);
//     if(N > 1000)
//     {
//         printf("I will buy Punjabi\n");
//         if(N>=1500)
//         {
//             printf("I will buy new shoes\n");
//             printf("Alisa will buy new shoes\n");

//         }
//     }
//     else
//     {
//         printf("Bad luck!");
//     }
//     return 0;
// }
// #include<stdio.h>
// int main()
// {
//     int A;
//     int B;
//     scanf("%d", &A);
//     scanf("%d", &B);
//     if(A>=B)
//     {
//         printf("Yes");
//     }
//     else
//     {
//         printf("No");
//     }
//     return 0;
// }

// #include<stdio.h>
// int main()
// {
//     int A, B;
//     scanf("%d%d", &A, &B);
//     if(A%B==0 || B%A==0)
//     {
//         printf("Multiples");
//     }
//     else
//     {
//         printf("No Multiples");
//     }
//     return 0;
// }
// #include<stdio.h>
// int main()
// {
//     printf("abs");
//     return 0;
// }

// upper case and lowercase letter conversion
// #include<stdio.h>
// int main()
// {
//     char a;
//     scanf("%c", &a);
//     if(a>='a' && a<='z')
//     {
//         int ans = a - 32;
//         printf("%c", ans);
//     }
//     else
//     {
//         int ans = a + 32;
//         printf("%c", ans);
//     }
//     return 0;
// }

// Given a number X. Print "EVEN" if the first digit of X is even number. Otherwise print "ODD".

// For example: In 4569 the first digit is 4, the second digit is 5, the third digit is 6 and the fourth digit is 9.
// #include<stdio.h>
// int main()
// {
//     int a;
//     int ans;
//     scanf("%d", &a);
//     ans = a / 1000;
//     if(ans % 2 == 0)
//     {
//         printf("EVEN");
//     }
//     else
//     {
//         printf("ODD");
//     }

//     return 0;
// }

// Given a letter X. Determine whether X is Digit or Alphabet and if it is Alphabet determine if it is Capital Case or Small Case.
// #include<stdio.h>
// int main()
// {
//     char a;
//     scanf("%c", &a);
//     if (a >= '0'&& a <= '9')
//     {
//         printf("IS DIGIT\n");
//     }
//     else
//     {
//         printf("ALPHA\n");
//         if (a >= 'a' && a <= 'z')
//         {
//             printf("IS SMALL\n");
//         }
//         else
//         {
//             printf("IS CAPITAL\n");
//         }

//     }

//     return 0;
// }

// max min problem

// #include<stdio.h>
// int main()
// {
//     int a, b, c;
//     scanf("%d%d%d", &a, &b, &c);
//     if(a <= b && a <= c)
//     {
//         printf("%d ", a);
//     }
//     else if(b <= a && b <= c)
//     {
//         printf("%d ", b);
//     }
//     else
//     {
//         printf("%d ", c);
//     }

//     if(a >= b && a >= c)
//     {
//         printf("%d\n", a);
//     }
//     else if(b >= a && b >= c)
//     {
//         printf("%d\n", b);
//     }
//     else
//     {
//         printf("%d", c);
//     }
//     return 0;
// }

// ////////////////////////////////////////////nodule 6////////////////////////
// increment decrement (i++ i-- ++i --i)
// i++ post increment
// ++i pre increment
// some issue in assignment(when assigning in another variable)

// #include <stdio.h>
// int main()
// {
//     int N;
//     scanf("%d", &N);
//     if (N == 1)
//     {
//         printf("-1\n");
//     }
//     else
//     {
//         for (int i = 1; i <= N; i++)
//         {
//             if (i % 2 == 0)
//             {
//                 printf("%d\n", i);
//             }
//         }
//     }
//     return 0;
// }


// #include<stdio.h>
// int main()
// {
//     int n;
//     scanf("%d", &n);
//     if (n == 1)
//     {
//         printf("-1\n");
//     }
//     else
//     {
//         for (int i = 1; i <= n; i++)
//         {
//             if (i % 2 == 0)
//             {
//                 printf("%d\n", i);
//             }
//         }
//     }

//     return 0;
// }



// not submitted yet
// most important (https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/C)

// #include<stdio.h>
// int main()
// {
//     int n;
//     scanf("%d", &n);
//     int a, even = 0, odd = 0, pos = 0, neg = 0;
//     for (int i = 0; i < n; i++)
//     {
//         scanf("%d", &a);
//         if (a%2==0)
//         {
//             even++;
//         }
//         else
//         {
//             odd++;
//         }
//         if(a>0)
//         {
//             pos++;
//         }
//         else if(a<0)
//         {
//             neg++;
//         }
//         // else
//         // {
//         //     even++;
//         // }
            
//     }
//     printf("Even: %d\nOdd: %d\nPositive: %d\nNegative: %d\n", even, odd, pos, neg);
    
//     return 0;
// }


// end of file (take input until their file is ended) that means its prohibited to run ifinity loop.if the number of input is not mentioned in the prorogram. solution for this is that :
// while(scanf() != EOF)


// ////////////////////////////////////////important////////////////////////////////////
// #include<stdio.h>
// int main()
// {
//     int n;
//     while(scanf("%d",&n) != EOF)
//     {
//         if(n==1999)
//         {
//             printf("Correct\n");
//             break;
//         }
//         else
//         {
//             printf("Wrong\n");
//         }
//     }
//     return 0;
// }


// #include<stdio.h>
// int main()
// {
//     int n;
//     scanf("%d", &n);
//     int a, max = 0;
//     for (int i = 1; i <= n; i++)
//     {
//         scanf("%d", &a);
//         if(a>max)
//         {
//             max = a;
//         }

//     }
//     printf("%d", max);
    
//     return 0;
// }



// include<limits.h>    int max = INT_MIN int max = INT_MAX
// 
// #include<stdio.h>
// #include<limits.h>
// int main()
// {
//     int n;
//     scanf("%d", &n);
//     int a, max = INT_MIN, min = INT_MAX;
//     for (int i = 1; i <= n; i++)
//     {
//         scanf("%d", &a);
//         if(a>max)
//         {
//             max = a;
//         }
//         if(a<min)
//         {
//             min = a;
//         }

//     }
//     printf("%d %d", max, min);
    
//     return 0;
// }

// #include<stdio.h>
// int main()
// {
//     int n;
//     scanf("%d", &n);
//     for(int i=1; i<=12; i++)
//     {
//         printf("%d * %d = %d\n", n, i, n*i);
//     }

//     return 0;
// }

// #include<stdio.h>
// int main()
// {
//     int test;
//     scanf("%d", &test);
//     for(int t=1; t<=test; t++)
//     {
//         int n;
//         scanf("%d", &n);
//         do
//         {
//             printf("%d ", n%10);
//             n = n/10;
//         } 
//         while (n!=0);
//         printf("\n");
//     }
    
//     return 0;
// }


// #include<stdio.h>
// int main()
// {
//     int n;
//     int m;
//     scanf("%d", &n);
//     scanf("%d", &m);
//     for(int i=1; i<=n; i++)
//     {
//         for(int j=1; j<=m; j++)
//         {
//             printf("%d ", j);
//         }
//         printf("\n");
//     }
//     return 0;
// }

// #include<stdio.h>
// int main()
// {
//     for (int i = 0; i <= 10; i++) {
//     if (i % 2 == 0) {
//         printf("%d ", i);
//     }
//     }
//     return 0;
// }

// Given a lowercase alphabet character. You have to print the next character in the alphabet.

// #include<stdio.h>
// int main()
// {
//     char n;
//     scanf("%c", &n);
//     if (n == 'z')
//     {
//         printf("a");
//     }
//     else
//     {
//         printf("%c", n+1);  
//     }
    
//     return 0;
// }

// One day, Ali Baba had an easy puzzle that he couldn't solve. The puzzle consisted of 4
//  numbers and his task was to check whether he could get the fourth number using arithmetic operators (+,−,×
// ) between the other three numbers; so that each operator is used only once.

// #include<stdio.h>
// int main()
// {
//     long long int a, b, c;
//     long long int d;
//     scanf("%lld%lld%lld%lld", &a, &b, &c, &d);
//     if(a+b-c == d || a-b+c == d || a+b*c == d || a*b+c == d || a-b*c == d || a*b-c == d)
//     {
//         printf("YES");
//     }
//     else
//     {
//         printf("NO");
//     }
//     return 0;
// }

// Given a number N. Print all the divisors of N in ascending order.
// #include<stdio.h>
// int main()
// {
//     int a;
//     scanf("%d", &a);
//     for (int i = 1; i <= a; i++)
//     {
//         if (a%i==0)
//         {
//             printf("%d\n", i);
//         } 
//     }
    
//     return 0;
// }


// // Timon has a
//  candies and his friend, Pumbaa, has b
//  candies, so Pumbaa asked Timon to tell him the value of a−b
// . However, Timon will tell him the value of a−b
//  if the value is ≥0
// ; otherwise, he will lie and say 0
// . Since it was a hard task for Timon, he's asking for your help.

// Given two numbers a
//  and b
// , find the answer.
// #include<stdio.h>
// int main()
// {
//     int a,b;
//     scanf("%d%d", &a, &b);
//     if (a-b >= 0)
//     {
//         printf("%d", a-b);
//     }
//     else
//     {
//         printf("0");
//     }
    
//     return 0;
// }


// A number of two digits is lucky if one of its digits is divisible by the other.

// For example, 39, 82, and 55 are lucky, while 79 and 43 are not.

// Given a number between 10 and 99, determine whether it is lucky or not.

// #include<stdio.h>
// int main()
// {
//     int n;
//     scanf("%d", &n);
//     int a = n/10;
//     int b = n%10;
//     if(a%b==0 || b%a==0)
//     {
//         printf("YES");
//     }
//     else if(a == 0)
//     {
//     }
//     else
//     {
//         printf("NO");
//     }
//     return 0;
// }

// ///////////////////////////////// array////////////////////////////////

// int ar[]

// #include<stdio.h>
// int main()
// {
//     int ar[5];
//     for (int i = 0; i<5; i++)
//     {
//         scanf("%d", &ar[i]);
//         // printf("ar[%d]\n", i);
//     }
//     for (int i = 0; i < 5; i++)
//     {
//         printf("ar[%d] = %d\n", i, ar[i]);
//     }
//     return 0;
// }

// #include<stdio.h>
// int main()
// {
//     int ar[5] = {20, 30, 40, 50, 30,50};
//     for (int i = 5-1; i >= 0; i--)
//     {
//         printf("%d\n", ar[i]);
//     }
    
//     return 0;
// }
// array size n hole initialized kora jabena

// #include<stdio.h>
// int main()
// {
//     int n;
//     scanf("%d", &n);
//     int ar[n];
//     int sum = 0;
//     for (int i = 0; i < n; i++)
//     {
//         scanf("%d", &ar[i]);
//     }
//     for (int i = 0; i < n; i++)
//     {
//         printf("%d\n", ar[i]);
//     }
//     printf("descending\n");
//     for (int i = n-1; i >= 0; i--)
//     {
//         printf("%d\n", ar[i]);
//     }
//     printf("sum of these numbers\n");
//     for (int i = 0; i < n; i++)
//     {
//         sum = sum + ar[i];
//     }
//     printf("%d", sum);
    
    
//     return 0;
// }


// #include<stdio.h>
// int main()
// {
//     int arrayName[] = {1, 2, 3};
//     printf("%d\n", arrayName[2]);
//     return 0;
// }

// The Egyptian football team will be in Russia for the World Cup. Of course, they all would like to buy souvenirs for their families. Luckily, they met the king of souvenirs Matryoshka who is famous for his masterpiece Katryoshka. He makes it using different wooden pieces: eyes, mouths and bodies. He can form a nice Katryoshka using one of the following combinations:

// Two eyes and one body.
// Two eyes, one mouth, and one body.
// One eye, one mouth, and one body.


// ////////////////////////////////////////////////////most hardest one///////////////////

// #include<stdio.h>
// int main()
// {
//     long long int n, m, k;
//     scanf("%lld%lld%lld", &n, &m, &k);
//     long long int min = 0, number_of_doll = 0;
//     if (n==0)
//     {
//         number_of_doll == n;
//     }
//     else
//     {
//         if (n<=m && n<=k)
//         {
//             min = n;
//             number_of_doll = n;
//         }
//         else if (m<=n && m<=k)
//         {
//             min = m;
//             long long int rest_n = (n-min)/2;
//             long long int rest_k = k-min;
//             if (rest_n < rest_k)
//             {
//                 number_of_doll = rest_n + min;
//             }
//             else if (rest_k < rest_n)
//             {
//                 number_of_doll = rest_k+min;
//             }
//             else if (rest_n == rest_k)
//             {
//                 number_of_doll = min + rest_n;
//             }                       
//         }
//         else
//         {
//             min = k;
//             number_of_doll = k;
//         }    
//     }
//     printf("%lld", number_of_doll);
    
//     return 0;
// }

// #include<stdio.h>
// int main()
// {
//     int n;
//     scanf("%d", &n);
//     for (int i = 1; i <= n; i++)
//     {
//         printf("I Love Assignment\n");
//     }
    
//     return 0;
// }


// #include<stdio.h>
// int main()
// {
//     int n;
//     scanf("%d", &n);
//     if (n<=0)
//     {
//         for (int i = n; i <= 1; i++)
//         {
//             printf("%d ", i);
//         }
//     }
//     else
//     {
//         for (int i = 1; i <= n; i++)
//         {
//             printf("%d ", i);
//         }
//     }
    
//     return 0;
// }

// #include<stdio.h>
// int main()
// {
//     int n;
//     scanf("%d", &n);
//     int a, sum_of_even = 0, sum_of_odd = 0;
//     for (int i = 0; i < n; i++)
//     {
//         scanf("%d", &a);
//         if (a%2==0)
//         {
//             sum_of_even = sum_of_even + a;
//         }
//         else
//         {
//             sum_of_odd = sum_of_odd + a;
//         }
//     }
//     printf("%d %d", sum_of_even, sum_of_odd);
    
//     return 0;
// }

// #include<stdio.h>
// int main()
// {
//     int n;
//     scanf("%d", &n);
//     int ar[n];
//     int x, v;
//     for (int i = 0; i < n; i++)
//     {
//         scanf("%d", &ar[i]);
//     }
//     scanf("%d%d", &x, &v);
//     ar[x] = v;
//     for (int i = n-1; i >= 0; i--)
//     {
//         printf("%d ",ar[i]);
//     }

    
    
//     return 0;
// }

// #include<stdio.h>
// int main()
// {
//     int n;
//     scanf("%d", &n);
//     int ar[n];
//     int a;
//     for (int i = 0; i < n; i++)
//     {
//         scanf("%d", &ar[i]);
//     }
//     for (int i = n-1; i >= 0; i--)
//     {
//         if (i%2==0)
//         {
//          printf("%d ", ar[i]);
            
//         }
        
//     }
    
    
//     return 0;
// }



// #include<stdio.h>
// int main()
// {
//     int n;
//     scanf("%d", &n);
//     for (int i = 1; i <= n; i++)
//     {

//         if (n%i == 0)
//         {
//             printf("%d\n", i);
//         }
        
//     }
    
//     return 0;
// }

// #include<stdio.h>
// int main()
// {
//     int a, b;
//     scanf("%d%d", &a, &b);
//     int number_of_candies = a-b;
//     if (number_of_candies >= 0)
//     {
//         printf("%d", number_of_candies);
//     }
//     else
//     {
//         printf("0");
//     }
     
//     return 0;
// }
// #include<stdio.h>
// int main()
// {
//     int n;
//     scanf("%d", &n);
//     int ar[n+1];
//     for (int i = 0; i < n; i++)
//     {
//         scanf("%d", &ar[i]);
//     }
//     int pos, val;
//     scanf("%d %d", &pos, &val);
//     for (int i = n; i >= pos+1; i--)
//     {
//         ar[i] = ar[i-1];
//     }
//     ar[pos] = val;
//     for (int i = 0; i < n+1; i++)
//     {
//         printf("%d ", ar[i]);
//     }
    
    
//     return 0;
// }

// string like array
// #include<stdio.h>
// int main()
// {
//     char a[5];
//     for (int i = 0; i < 5; i++)
//     {
//         scanf("%c", &a[i]);
//     }
//     for (int i = 0; i < 5; i++)
//     {
//         printf("%c\n", a[i]);
//     }
    
//     return 0;
// }

// size of array
// #include<stdio.h>
// int main()
// {
//     int a[5];
//     printf("%d", sizeof(a)/sizeof(int));
//     return 0;
// }
// null character \0
// #include<stdio.h>
// int main()
// {
//     char a[6] = "Rahat\0";
//     char b[8] = "nowshad";
//     char c[6] = {'m', 'u', 'k', 'i', 't'}; //no garantee to take null
//     printf("%s\n%s\n%s", a, b, c);
//     return 0;
// }

// #include<stdio.h>
// int main()
// {
//     char a[6];
//     scanf("%s", &a);
//     printf("%s", a);
//     return 0;
// }

// gets and fgets to input with space for a string
// for string related any header file #include<string.h>
// fgets(name of the array, size(with null), stdin(standard input))

// fgets take enter as input

// #include<stdio.h>
// #include<string.h>
// int main()
// {
//     // char a[18];
//     char b[20];
//     // gets(a);
//     fgets(b, 26, stdin);
//     b[26] = '\0';
//     // printf("%s\n", a);
//     printf("%s", b);
//     return 0;
// }

// length of a string
// #include<string.h>          strlen() to find the length of a function
// #include<stdio.h>
// int main()
// {
//     char a[100];
//     scanf("%s", a);
//     int count = 0;
//     for (int i = 0; a[i] != '\0'; i++)
//     {
//         count++;
//     }
//     printf("%d", count);
//     return 0;
// }


// ////////////////////////////////copy  string//////////////////////

// #include<stdio.h>
// #include<string.h>
// int main()
// {
//     char a[100], b[100];
//     scanf("%s %s", a, b);
//     for (int i = 0; i <= strlen(b); i++)
//     {
//         a[i] = b[i];
//     }
//     printf("%s %s", a, b);
    
//     return 0;
// }

// ///////////////////////////////////strcpy///////////////////////
// #include<stdio.h>
// #include<string.h>
// int main()
// {
//     char a[100], b[100];
//     scanf("%s %s", a, b);
//     strcpy(a,b);
//     printf("%s %s", a, b);
    
//     return 0;
// }


// /////////////////////////lexicographical comparison////////////////

// #include<stdio.h>
// int main()
// {
//     char a[100], b[100];
//     scanf("%s %s", a, b);
//     int i = 0;
//     while (1)
//     {
//         if (a[i] == '\0' && b[i] == '\0')
//         {
//             printf("Both are same");
//             break;
//         }
//         else if (a[i] == '\0')
//         {
//             printf("first one is smaller");
//             break;
//         }
//         else if (b[i] == '\0')
//         {
//             printf("second one is smaller");
//             break;
//         }
        
//         if (a[i] == b[i])
//         {
//             i++;
//         }
//         else if (a[i] < b[i])
//         {
//             printf("first one is smaller");
//             break;
//         }
//         else{
//             printf("second one is smaller");
//             break;
//         }   
//     }
    
//     return 0;
// }
// //////////////////////////////////////strcmp/////////////////

// #include<stdio.h>
// #include<string.h>
// int main()
// {
//     char a[100], b[100];
//     scanf("%s%s", a, b);
//     int v = strcmp(a,b);
//     printf("%d", v);    
//     return 0;
// }


// ////////////////////////////////////////////string concat////////

// #include<stdio.h>
// #include<string.h>
// int main()
// {
//     char a[200], b[200];
//     scanf("%s %s", a, b);
//     int k = strlen(a);
//     for (int i = 0; i <= strlen(b); i++)
//     {
//         a[k] = b[i];
//         k++;
//     }
//     printf("%s %s", a, b);
    
//     return 0;
// }

// //////////////////////fixed number concat//////////////
// #include<stdio.h>
// #include<string.h>
// int main()
// {
//     char a[200], b[200];
//     scanf("%s %s", a, b);
//     int k = strlen(a);
//     for (int i = 0; i <=2; i++)
//     {
//         a[k] = b[i];
//         k++;
//     }
//     a[k] = '\0';
//     printf("%s %s", a, b);
    
//     return 0;
// }


// ///////////////////////////////////strcat///////////////////////
// #include<stdio.h>
// #include<string.h>
// int main()
// {
//     char a[200], b[200];
//     scanf("%s %s", a, b);
//     strcat(a, b);
//     printf("%s %s", a, b);
    
//     return 0;
// }

////////////////////////////counting array 1 /////////////////
// it is called frequncy array too

// #include<stdio.h>
// int main()
// {
//     int n;
//     scanf("%d", &n);
//     int a[n];
//     for (int i = 0; i < n; i++)
//     {
//         scanf("%d", &a[i]);
//     }
//     int count[7] = {0};
//     for (int i = 0; i < n; i++)
//     {
//         if (a[i] == 0)
//         {
//             count[0]++;
//         }
//         if (a[i] == 1)
//         {
//             count[1]++;
//         }
//         if (a[i] == 2)
//         {
//             count[2]++;
//         } 
//     }
//     printf("0 - %d\n", count[0]);
//     printf("1 - %d\n", count[1]);
//     printf("2 - %d\n", count[2]);
    

    
//     return 0;
// }
// #include<stdio.h>
// int main()
// {
//     int n;
//     scanf("%d", &n);
//     int a[n];
//     for (int i = 0; i < n; i++)
//     {
//         scanf("%d", &a[i]);
//     }
//     int count[7] = {0};
//     for (int i = 0; i < n; i++)
//     {
//         int val = a[i];
//         count[val]++;
//     }
//     for (int i = 0; i <= 6; i++)
//     {
//         printf("%d - %d\n",i, count[i]);
//     }
    
    

    
//     return 0;
// }

// //////////////////////////////////counting array 2 /////////////////
// #include<stdio.h>
// #include<string.h>
// int main()
// {
//     char a[100];
//     scanf("%s", a);
//     int count[26] = {0};
//     for (int i = 0; i < strlen(a); i++)
//     {
//         int value = a[i] - 'a';
//         count[value]++;
//     }
//     for (int i = 0; i < 26; i++)
//     {
//         // printf("%c - %d\n",i + 'a', count[i]);
//         if (count[i] != 0)
//         {
//             printf("%c - %d\n",i + 'a', count[i]);
//         }
        
//     }
    
    
//     return 0;
// }
// ////////////////////////////nested loop//////////////////
// *
// **
// ***
// ****
// *****
// #include<stdio.h>
// int main()
// {
//     int n;
//     scanf("%d", &n);
//     for (int i = 0; i < n; i++)
//     {
//         // ek ekta kaj
//         for (int j = 0; j <= i; j++)
//         {
//             printf("%c", '*');
//         }
//         printf("\n");
        
        
//     }
    
//     return 0;
// }

// another system of pattern 1

// #include<stdio.h>
// int main()
// {
//     int n, k = 1;
//     scanf("%d", &n);
//     for (int i = 1; i <= n; i++)
//     {
//         for (int j = 1; j <= k; j++)
//         {
//             printf("*");
//         }

//         k++;
//         printf("\n");
        
//     }
    
//     return 0;
// }
// *****
// ****
// ***
// **
// *
// #include<stdio.h>
// int main()
// {
//     int n;
//     scanf("%d", &n);
//     for (int i = 1; i <= n; i++)
//     {
//         // int temp = n;
//         // k = n;
//         for (int j = n; j >= i; j--)
//         {
//             printf("*");
//         }
//         printf("\n");
//     }
    
//     return 0;
// }

// #include<stdio.h>
// int main()
// {
//     int n, k;
//     scanf("%d", &n);
//     k= n;
//     for (int i = 1; i <= n; i++)
//     {
//         for (int j = 1; j <= k; j++)
//         {
//             printf("*");
//         }
//         k--;
        
//         printf("\n");
//     }
    
//     return 0;
// }

// ///////////////////pattern 2///////////////
//      *
//     ***
//    *****
// #include<stdio.h>
// int main()
// {
//     int n, s, k;
//     scanf("%d", &n);
//     s= n-1;
//     k =1;
//     for (int i = 1; i <= n; i++)
//     {
//         for (int j = 1; j <= s; j++)
//         {
//             printf(" ");
//         }
//         for (int j = 1; j <= k; j++)
//         {
//             printf("*");
//         }
//         s--;
//         k = k+2;
//         printf("\n");
//     }
    
//     return 0;
// }

// *******
//  *****
//   ***
//    *
// #include<stdio.h>
// int main()
// {
//     int n, s, k;
//     scanf("%d", &n);
//     s = 0;
//     k = 2*n-1;
//     for (int i = 1; i <= n; i++)
//     {
//         for (int j = 1; j <= s; j++)
//         {
//             printf(" ");
//         }
//         for (int j = 1; j <= k; j++)
//         {
//             printf("*");
//         }
//         s++;
//         k=k-2;
        
//         printf("\n");
//     }
    
//     return 0;
// }

////////////////////////////////pattern 3///////
// 1
// 1 2
// 1 2 3 
// 1 2 3 4
// #include<stdio.h>
// int main()
// {
//     int n, k =1;
//     scanf("%d", &n);
//     for (int i = 1; i <= n; i++)
//     {
//         for (int j = 1; j <= k; j++)
//         {
//             printf("%d", j);
//         }
//         k++;
//         printf("\n");
        
//     }
    
//     return 0;
// }
// 1 2 3 4
// 1 2 3
// 1 2 
// 1
// #include<stdio.h>
// int main()
// {
//     int n, k;
//     scanf("%d", &n);
//     k= n;
//     for (int i = 1; i <= n; i++)
//     {
//         for (int j = 1; j <= k; j++)
//         {
//             printf("%d ", j);
//         }
//         k--;
//         printf("\n");
        
//     }
    
//     return 0;
// }
//////////////////////////////pattern 4///////////// 
// #include<stdio.h>
// int main()
// {
//     int n, s, k;
//     scanf("%d", &n);
//     s = n-1;
//     k =1;
//     for (int i = 1; i <= 2*n-1; i++)
//     {
//         for (int j = 1; j <= s; j++)
//         {
//             printf(" ");
//         }
//         for (int j = 1; j <= k; j++)
//         {
//             printf("*");
//         }
//         if (i <= n-1)
//         {
//             s--;
//             k = k+2;
//         }
//         else
//         {
//             s++;
//             k = k-2;
//         }
        
//         printf("\n");
        
//     }
    
//     return 0;
// }

// #include<stdio.h>
// int main()
// {
//     int n, s, k;
//     scanf("%d", &n);
//     s = n-1;
//     k = 1;
//     for (int i = 1; i <= 2*n - 1; i++)
//     {
//         for (int j = 1; j <= s; j++)
//         {
//             printf(" ");
//         }
//         for (int j = 1; j <= k; j++)
//         {
//             printf("*");
//         }
//         if (i <= n-1)
//         {
//             s--;
//             k = k+2;
//         }
//         else
//         {
//             s++;
//             k = k-2;
//         }
        
//         printf("\n");
        
        
//     }
    
//     return 0;
// }
//////////////////sum of two values equal x/////////
// #include<stdio.h>
// int main()
// {
//     int n;
//     scanf("%d", &n);
//     int a[n], k;
//     for (int i = 0; i < n; i++)
//     {
//         scanf("%d", &a[i]);
//     }
//     int x;
//     scanf("%d", &x);
//     int flag = 0;
//     for (int i = 0; i < n-1; i++)
//     {
//         for (int j = i+1; j < n; j++)
//         {
//             // printf("%d + %d = %d\n", a[i], a[j], a[i]+a[j]);
//             if (a[i] + a[j] == x)
//             {
//                 flag = 1;
//             }
            
//         }
//     }
//     if (flag == 0)
//     {
//         printf("NO\n");
//     }
//     else
//     {
//         printf("YES\n");
//     }
    
    
//     return 0;
// }

// //////////////////////////////////selection sort algorithm\\\\\\\\\\\\\\\\

// #include<stdio.h>
// int main()
// {
//     int n;
//     scanf("%d", &n);
//     int a[n];
//     for (int i = 0; i < n; i++)
//     {
//         scanf("%d", &a[i]);
//     }
//     // // ascending sort
//     // for (int i = 0; i < n-1; i++)
//     // {
//     //     for (int j = i+1; j < n; j++)
//     //     {
//     //         if (a[i] > a[j])
//     //         {
//     //             int temp = a[i];
//     //             a[i] = a[j];
//     //             a[j] = temp;
//     //         }       
//     //     }    
//     // }

//     // // descending sort
//     for (int i = 0; i < n-1; i++)
//     {
//         for (int j = i+1; j < n; j++)
//         {
//             if (a[i] < a[j])
//             {
//                 int temp = a[i];
//                 a[i] = a[j];
//                 a[j] = temp;
//             }   
//         }    
//     }
//     for (int i = 0; i < n; i++)
//     {
//         printf("%d ", a[i]);
//     }
//     return 0;
// }

/////////////////////////////////////////function //////////////////////////
// 1) return type + parameter 
// 2)return type + no parameter
// 3) no return type + parameter
// 4) no return type + no parameter
// #include<stdio.h>
// int sum(int x, int y)
// {
//    int sum = x+y;
//    return sum; 
// }
// int main()
// {
//     int s = sum(10, 40);
//     printf("%d\n", s);
//     printf("%d\n", sum(30,40));
//     return 0;
// }

// if you declare function below the main function it will show an warning
// in that case you may declare just the function name above the main function.
// #include<stdio.h>
// int sum(int x, int y);
// int main()
// {
//     int s = sum(10, 20);
//     printf("%d", s);
//     return 0;
// }
// int sum(int x, int y)
// {
//     int sum = x + y;
//     return sum;
// }

// so it is best to declare function abobe the main function
// #include<stdio.h>
// int sum(int x, int y)
// {
//     int sum = x+y;
//     return sum;
// }
// int main()
// {
//     int x,y;
//     scanf("%d%d", &x, &y);
//     printf("%d", sum(x,y));
//     return 0;
// }
// if there is no parameter in the function.i can take input in function
// #include<stdio.h>
// int sum()
// {
//     int a, b;
//     scanf("%d%d", &a, &b);
//     int sum = a+b;
//     return sum;
// }
// int main()
// {
//     int s = sum();
//     printf("%d", s);
//     return 0;
// }

// if you write void in the function.it will show error if you give value of a
// function.in contrast if you dont write void and pass value through a function.it 
// will ignore the value given in the function.
// #include<stdio.h>
// int sum(void){
//     int a,b;
//     scanf("%d%d", &a, &b);
//     int sum = a +b;
//     return sum;
// }
// int main()
// {
//     int s = sum(); //if you pass any value now, it will show error
//     printf("%d", s);

//     return 0;
// }


// if the function type is void.it will not return any value.
// so the value will not be printed in the maib function.
// in that case,you have to print it in the named functio.for instance, in the sum functn
// if you wnat a break in function.you have to write return;
// #include<stdio.h>
// void sum(int x, int y)
// {
//     int sum = x + y;

//     printf("%d", sum);
// }
// int main()
// {
//     int a,b;
//     scanf("%d%d", &a, &b);
//     sum(a, b);
//     return 0;
// }

// no retun no parameter
// everythong will be done in the sum function
// #include<stdio.h>
// void sum(void)
// {
//     int a, b;
//     scanf("%d%d", &a, &b);
//     int sum = a + b;
//     printf("%d\n", sum);
// }
// int main()
// {
//     sum();
//     sum();
//     return 0;
// }
// ///////////////////////////////////// bultin function///////////////

// printf(), scanf(), strlen(), strcpy(), strcmp(), 
// ceil(), floor(), round(), sqrt(), pow(). abs()(lonf long int e jhamela kore) in that case you have to take <math.h>
// to use abs() you have to use <stlib.h>

// //////////////////////////////////////scope/////////////////////////////////////

//  to get the memory adress printf("main er adress - %p\n, &s");

// /////////////////////////////pointer//////////////////////////

// pointer is kind of variabe
// it helps to store memory adress
// pointer takes 4  byte

// #include<stdio.h>
// int main()
// {
//     int x =10;
//     int* p = &x;
//     printf("%p\n", &x);
//     printf("%p\n", p);
//     printf("%d\n", *p);
//     *p = 500;
//     printf("%d", x);
//     return 0;
// }

// value of pointer is the given variable adress. pointer has its own mwmory adress
// call by value and call by reference
// relation between pointer and array
// array and string in function
// how array works like call by reference in function
// dereference
// #include<stdio.h>
// int main()
// {
//     int x = 100;
//     int *ptr = &x;
//     printf("%p\n", &x);
//     printf("%p\n", ptr);
//     printf("%p\n", &ptr);
//     x = 200;
//     printf("%d\n", *ptr);
//     printf("%d\n", x);

//     return 0;
// }
// #include<stdio.h>
// int main()
// {
//     double x = 5.25;
//     double *ptr = &x;
//     double *ptr2 = ptr;
//     *ptr2 = 40.5;
//     printf("%0.2lf\n", x);
//     printf("%0.2lf\n", *ptr);
//     printf("%d\n", sizeof(ptr));
//     printf("%0.2lf\n", *ptr2);

//     return 0;
// }

// //////////////////////call by value/ pass by value////////////////
// the int x in function is called only value.not memory adress.adree will be different
// #include<stdio.h>
// void fun(int x)
// {
//     printf("adress of x in fun function is %p\n", &x);
//     x= 200;
// }
// int main()
// {
//     int x = 10;
//     printf("adress of x in main function is %p\n", &x);
//     printf("%d\n", x);
//     fun(x);
//     return 0;
// }

// ///////////////////////call by reference////////////
// #include<stdio.h>
// void fun(int *p)
// {
//     // printf("value of p- %p\n", p);
//     // printf("the value of x in main- %d\n", *p);
//     *p = 200;
// }
// int main()
// {
//     int x = 100;
//     printf("adress of x- %p\n", &x);
//     fun(&x);
//     printf("%d", x);
//     return 0;
// }

// ////////////////////////////arr[], here arr is a pointer/////
// #include<stdio.h>
// int main()
// {
//     int ar[5] = {2, 4, 5, 6,7};
//     printf("adress of 0th index %p\n", &ar[0]);
//     printf("adress of ar %p\n", ar);
//     printf("value of 0th index %d\n", ar[0]);
//     printf("value of ar %d\n", *ar);
//     printf("value of first index %d\n", ar[1]);
//     printf("value of first index by deferencing %d\n", *(ar+1));
//     return 0;
// }

// ///////////////////////////array in function//////////////////////

// #include<stdio.h>
// void count_before_zero(int ar[], int size) //ponter akareo receive korajay *ar likhe
// {
//     int count = 0;
//     for (int i = 0; i < size; i++)
//     {
//         if (ar[i] == 0)
//         {
//             break;;
//         }
//         count++;   
//     }
//     printf("%d", count);
    
// }
// int main()
// {
//     int n;
//     scanf("%d", &n);
//     int ar[n];
//     for (int i = 0; i < n; i++)
//     {
//         scanf("%d", &ar[i]);
//     }
//     count_before_zero(ar, n);
//     return 0;
// }

// ////////////////////////////////////function and string/////////////////////
// normall array t size nite hoy.but string e lagena.cause string e strlen lage.


// #include<stdio.h>
// #include<string.h>
// void fun(char ar[]) //ponter akareo receive korajay *ar likhe
// {
//     printf("%d", strlen(ar));
// }
// int main()
// {
//     char ar[6] = "hello";
//     fun(ar);
//     return 0;
// }


// ////////////////////////function and array as reference//////////

// #include<stdio.h>
// void fun(int *ar) //you may use the length of the array here
// {
//     ar[0] = 50;
// }
// int main()
// {
//     int ar[5] = {10, 20, 30, 40, 50};
//     fun(ar);
//     for (int i = 0; i < 5; i++)
//     {
//         printf("%d ", ar[i]);
//     }

//     return 0;
// }

// #include<stdio.h>
// void fun(char *ar)
// {
//     ar[0] = 'g';
// }
// int main()
// {
//     char ar[5] = "hello";
//     fun(ar);
//     for (int i = 0; i < 5; i++)
//     {
//         printf("%c", ar[i]);
//     }
    
//     return 0;
// }




// ass
// #include<stdio.h>
// int main()
// {
//     int n, s,k;
//     scanf("%d", &n);
//     s = n-1;
//     k = 1;
//     for (int i = 1; i <= 2*n-1; i++)
//     {
//         for (int j = 1; j <= s; j++)
//         {
//             printf(" ");
//         }
//         for (int j = 1; j <= k; j++)
//         {
//             printf("%d", j);
//         }
//         if (i <= n-1)
//         {
//             s--;
//             k = k+2;
//         }
//         else
//         {
//             s++;
//             k = k-2;
//         }  
//         printf("\n");     
//     }
//     return 0;
// }

// ques 2
// #include<stdio.h>
// int main()
// {
//     int n,s,k;
//     scanf("%d", &n);
//     s = n-1;
//     k = 1;
//     for (int i = 1; i <= n; i++)
//     {
//         for (int j = 1; j <= s; j++)
//         {
//             printf(" ");
//         }
//         for (int j = 1; j <= k; j++)
//         {
//             printf("%d", i);
//         }
//         s--;
//         k++;
//         printf("\n");
        
        
//     }
    
//     return 0;
// }

// ques 3

// #include<stdio.h>
// int count_before_zero(int ar[], int size)
// {
//     int count = 0;
//     for (int i = 0; i < size; i++)
//     {
//         if (ar[i] == 0)
//         {
//             break;;
//         }
//         count++;   
//     }
//     return count;
    
// }
// int main()
// {
//     int n;
//     scanf("%d", &n);
//     int ar[n];
//     for (int i = 0; i < n; i++)
//     {
//         scanf("%d", &ar[i]);
//     }
//     int result = count_before_zero(ar, n);
//     printf("%d", result);
//     return 0;
// }

// four types of function with example
// Has Return + Parameter
// #include<stdio.h>
// int prodResult(int x, int y)
// {
//     int product = x * y;
//     return product;
// }
// int main()
// {
//     int a,b;
//     scanf("%d%d", &a, &b);
//     int prod_result = prodResult(a, b);
//     printf("product of these two number is %d", prod_result);
//     return 0;
// }

// Has Return + No Parameter
// #include<stdio.h>
// int subtraction()
// {
//     int x ,y;
//     scanf("%d%d", &x, &y);
//     int amount_of_vat = x - y;
//     return amount_of_vat;

// }
// int main()
// {
//     int x = subtraction();
//     printf("the subtracted value %d", x);
//     return 0;
// }

// No Return + Parameter
// #include<stdio.h>
// void addition(int x, int y){
//     int sum = x + y;
//     printf("sum of these two values is %d", sum);
// }
// int main()
// {
//     int x, y;
//     scanf("%d%d", &x, &y);
//     addition(x,y);
//     return 0;
// }

// No Return + No Parameter
// #include<stdio.h>
// void dividation(void)
// {
//     float x,y;
//     scanf("%f%f", &x,&y);
//     float result = x/y;
//     printf("the result of dividation is %0.2f", result);
// }
// int main()
// {
//     dividation();
//     return 0;
// }


// ques 5
// #include<stdio.h>
// #include<string.h>
// int is_palindrome(char ar[])
// {
//     int flag = 1;
//     for (int i = 0; i < strlen(ar); i++)
//     {
//         if (ar[i] != ar[strlen(ar)-i-1])
//         {
//             flag = 0;
//         }
        
//     }
//     return flag;
// }
// int main()
// {
//     char s[11];
//     scanf("%s", s);
//     int pal_detection = is_palindrome(s);
//     if (pal_detection == 1)
//     {
//         printf("Palindrome");
//     }
//     else
//     {
//         printf("Not Palindrome");
//     }
//     return 0;
// }


// #include<stdio.h>
// void valueAlteration(int x)
// {
//     x = 10;
//     printf("value of x in named function %d\n", x);
// }
// int main()
// {
//     int x =20;
//     valueAlteration(x);
//     printf("value of x in main function %d\n", x);
//     printf("here we see value is not changed");
//     return 0;
// }
// #include<stdio.h>
// void valueAlteration(int *x)
// {
//     *x = 10;
//     printf("value of x in named function %d\n", *x);
// }
// int main()
// {
//     int x =20;
//     valueAlteration(&x);
//     printf("value of x in main function %d\n", x);
//     printf("here we see vlue is changed");
//     return 0;
// }



// /////call stack
///////what is recursion
/////////////////////////////////////call stack/////////////////
// call stack mantain function calling
// #include<stdio.h>
// void world()
// {
//     printf("world start\n");
//     printf("world end\n");
// }
// void hello()
// {
//     printf("hello start\n");
//     world();
//     printf("hello end\n");
// }
// int main()
// {
//     printf("main function start\n");
//     hello();
//     printf("main function end");
//     return 0;
// }

// recursion formal definition.
// recursion is a type of function that call itself and try to copy that function 
// for several times.
// #include<stdio.h>
// void fun()
// {
//     printf("fun");
//     fun();
// }
// int main()
// {
//     fun();
//     printf("this the main function");
//     return 0;
// }

// base case means jeta diye recursion thamano hoy

// #include<stdio.h>
// void fun(int i)
// {
//     if(i == 6) return;//base case for controling the function
//     printf("%d\n", i);
//     fun(i+1);
// }
// int main()
// {
//     fun(1);
//     return 0;
// }

// #include<stdio.h>
// void fun(int i)
// {
//     if(i == 0) return;//base case for controling the function
//     printf("%d\n", i);
//     fun(i-1);
// }
// int main()
// {
//     fun(5);
//     return 0;
// }

// //////////////////////////////array printing using recursion////////////////////

// #include<stdio.h>
// void fun(int ar[], int n, int i)
// {
//     if(i == n) return; ///base case
//     printf("%d\n", ar[i]);
//     fun(ar, n, i+1);
// }
// int main()
// {
//     int n;
//     scanf("%d", &n);
//     int ar[n];
//     for (int i = 0; i < n; i++)
//     {
//         scanf("%d", &ar[i]);
//     }
//     fun(ar, n, 0);
//     return 0;
// }

// recursion age call na kore  pore call korle oita reverse e kaj kore
// most inmportant

// #include<stdio.h>
// void fun(int i){
//     if(i == 6) return;
//     fun(i+1);
//     printf("%d\n", i);
// }
// int main()
// {
//     fun(1);
//     return 0;
// }

// ///////////////////////////////////////// length of a string using recursion/////

// #include<stdio.h>
// int fun(char a[], int i)
// {
//     if (a[i] == '\0') return 0;
//     int l = fun(a, i+1);
//     return l+1;
// }
// int main()
// {
//     char a[6] = "hello";
//     int length = fun(a, 0);
//     printf("%d", length);
//     return 0;
// }


// //////////////////////two dimensional array////////////////////////

// //////////////2d array input and output/////////////////
// #include<stdio.h>
// int main()
// {
//     int a[5][3];
//     for (int i = 0; i < 5; i++)
//     {
//         for (int j = 0; j < 3; j++)
//         {
//             // printf("a[%d][%d] ", i, j);
//             scanf("%d", &a[i][j]);
//         }
        
//     }
//     for (int i = 0; i < 5; i++)
//     {
//         for (int j = 0; j < 3; j++)
//         {
//             // printf("a[%d][%d] ", i, j);
//             printf("%d ", a[i][j]);
//         }
//         printf("\n");
        
//     }
    
//     return 0;
// }

// /////////////////////////array printing by row and column

// #include<stdio.h>
// int main()
// {
//     int row, column;
//     scanf("%d%d", &row, &column);
//     int a[row][column];
//     for (int i = 0; i < row; i++)
//     {
//         for (int j = 0; j < column; j++)
//         {
//             scanf("%d", &a[i][j]);
//         } 
//     }
//     for (int i = 0; i < row; i++)
//     {
//         for (int j = 0; j < column; j++)
//         {
//             printf("%d ", a[i][j]);
//         }
//         printf("\n");
//     }

//     printf("now taking individual row data\n");
//     int r;
//     scanf("%d", &r);
//     for (int i = 0; i < column; i++)
//     {
//         printf("%d ", a[r][i]);
//     }
//     printf("\n");

//     printf("now taking individual column\n");
//     int col;
//     scanf("%d", &col);
//     for (int i = 0; i < row; i++)
//     {
//         printf("%d ", a[i][col]);
//     }
//     printf("\n");
//     return 0;
// }

// /////////////////////checking zero matrix//////////////////

// #include<stdio.h>
// int main()
// {
//     int row, column;
//     scanf("%d%d", &row, &column);
//     int a[row][column];
//     int element = row * column;
//     for (int i = 0; i < row; i++)
//     {
//         for (int j = 0; j < column; j++)
//         {
//             scanf("%d", &a[i][j]);
//         } 
//     }
//     for (int i = 0; i < row; i++)
//     {
//         for (int j = 0; j < column; j++)
//         {
//             printf("%d ", a[i][j]);
//         }
//         printf("\n");
//     }
//     printf("now checking wheather is it null matrix or not\n");

//     int count = 0;
//     for (int i = 0; i < row; i++)
//     {
//         for (int j = 0; j < column; j++)
//         {
//             if (a[i][j] == 0)
//             {
//                 count++;
//             }
            
//         }
//     }
//     if (element == count)
//     {
//         printf("its a null matrix");
//     }
//     else
//     {
//         printf("its not null");
//     }
    
//     return 0;
// }


// ////////////////////checking primary diagonal matrix///////////

// #include<stdio.h>
// int main()
// {
//     int row, column;
//     scanf("%d%d", &row, &column);
//     int a[row][column];
//     for (int i = 0; i < row; i++)
//     {
//         for (int j = 0; j < column; j++)
//         {
//             scanf("%d", &a[i][j]);
//         }
//     }
//     int flag = 1;
//     if (row != column)
//     {
//         flag = 0;
//     }
    
//     for (int i = 0; i < row; i++)
//     {
//         for (int j = 0; j < column; j++)
//         {
//             if (i == j)
//             {
//                 continue;
//             }
//             if (a[i][j] != 0)
//             {
//                 flag = 0;
//             }
//         }   
//     }
//     if (flag == 1)
//     {
//         printf("the matrix is primary diagonal");
//     }
//     else
//     {
//         printf("the matrix is not primary diagonal");
//     }
    
    
//     return 0;
// }


// /////////////////////////checking secondary diagonal////////

// #include<stdio.h>
// int main()
// {
//     int row, column;
//     scanf("%d%d", &row, &column);
//     int a[row][column];
//     for (int i = 0; i < row; i++)
//     {
//         for (int j = 0; j < column; j++)
//         {
//             scanf("%d", &a[i][j]);
//         }
//     }
//     int flag = 1;
//     if (row != column)
//     {
//         flag = 0;
//     }
    
//     for (int i = 0; i < row; i++)
//     {
//         for (int j = 0; j < column; j++)
//         {
//             if (i+j == row-1)
//             {
//                 continue;
//             }
//             if (a[i][j] != 0)
//             {
//                 flag = 0;
//             }
//         }   
//     }
//     if (flag == 1)
//     {
//         printf("the matrix is secondary diagonal");
//     }
//     else
//     {
//         printf("the matrix is not secondary diagonal");
//     }
    
    
//     return 0;
// }

// ///////////////////////////////////scaler matrix////////////////////

// #include<stdio.h>
// int main()
// {
//     int row, column;
//     scanf("%d%d", &row, &column);
//     int a[row][column];
//     for (int i = 0; i < row; i++)
//     {
//         for (int j = 0; j < column; j++)
//         {
//             scanf("%d", &a[i][j]);
//         }
        
//     }
//     int flag = 1;
//     if (row != column)
//     {
//         flag = 0;
//     }
//     for (int i = 0; i < row; i++)
//     {
//         for (int j = 0; j < column; j++)
//         {
//             if (i == j)
//             {
//                 if (a[i][j] != a[0][0])
//                 {
//                     flag = 0;
//                 }
//             }
//             else if (a[i][j] != 0)
//             {
//                 flag = 0;
//             } 
//         }
//     }
//     if (flag == 1)
//     {
//         printf("the matrix is scaler");
//     }
//     else
//     {
//         printf("the matrix is not scaler");
//     }
//     return 0;
// }


// //////////////////////////////////// primary identity matrix/////////////
// #include<stdio.h>
// int main()
// {
//     int row, column;
//     scanf("%d%d", &row, &column);
//     int a[row][column];
//     for (int i = 0; i < row; i++)
//     {
//         for (int j = 0; j < column; j++)
//         {
//             scanf("%d", &a[i][j]);
//         }
        
//     }
//     int flag = 1;
//     if (row != column)
//     {
//         flag = 0;
//     }
//     for (int i = 0; i < row; i++)
//     {
//         for (int j = 0; j < column; j++)
//         {
//             if (i == j)
//             {
//                 if (a[i][j] != 1)
//                 {
//                     flag = 0;
//                 }
//             }
//             else if (a[i][j] != 0)
//             {
//                 flag = 0;
//             } 
//         }
//     }
//     if (flag == 1)
//     {
//         printf("the matrix is identity matrix");
//     }
//     else
//     {
//         printf("the matrix is not identity matrix");
//     }
//     return 0;
// }



// //////////////////////////////////secondary identity matrix///////////////

// #include<stdio.h>
// int main()
// {
//     int row, column;
//     scanf("%d%d", &row, &column);
//     int a[row][column];
//     for (int i = 0; i < row; i++)
//     {
//         for (int j = 0; j < column; j++)
//         {
//             scanf("%d", &a[i][j]);
//         }
        
//     }
//     int flag = 1;
//     if (row != column)
//     {
//         flag = 0;
//     }
//     for (int i = 0; i < row; i++)
//     {
//         for (int j = 0; j < column; j++)
//         {
//             if (i+j == row-1)
//             {
//                 if (a[i][j] != 1)
//                 {
//                     flag = 0;
//                 }
//             }
//             else if (a[i][j] != 0)
//             {
//                 flag = 0;
//             } 
//         }
//     }
//     if (flag == 1)
//     {
//         printf("the matrix is secondary identity matrix");
//     }
//     else
//     {
//         printf("the matrix is not seconday identity matrix");
//     }
//     return 0;
// }




// ////////////////////////////////////recursion recap/////////////


