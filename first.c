#include<stdio.h>
int main()
{
    printf("hello world");

    // this is singal line commment

    /* this is multi-
        line comment */

    // Data type in C
    int a = 7, nm;
    float b = 9.99;
    char c = '*';

    // print and input

    // print value
    printf("\nMy number is : %d",a);
    printf("\nFloat value : %f",b);
    printf("\nCharacter is : %c",c);

    // input value
    printf("\nEnter value : ");
    scanf("%d",&nm);

    printf("\nYour number is : %d",nm);

    printf("\n\n\tThank you");
    return 0;
}