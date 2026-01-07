#include<stdio.h>
int CallByValue(int);
int CallByRefere(int*);
int main()
{
    int x;
    printf("Enter value : ");
    scanf("%d", &x);

    // Call By Value 
    CallByValue(x);
    printf("\nI can't print squar using call by value in main function");

    // Call By reference
    CallByRefere(&x);
    printf("\nBut i can print squar in main function using call by reference : %d", x);
    return 0;
}
int CallByValue(int x)
{
    int squar = x * x;
    printf("Squar is (using Call By Value) : %d\n", squar);
}
int CallByRefere(int* x)
{
    *x = *x * *x;
}