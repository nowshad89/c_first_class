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

