#include<stdio.h>
int add(int, int);
int sub(int, int);
int mul(int, int);
int div(int, int);
int main()
{
    // calculator using function and switch case 
    int x, y;
    char ch;
    float z;
    printf("Enter first number : ");
    scanf("%d",&x);
    printf("\nEnter second number : ");
    scanf("%d",&y);
    printf("\nEnter operator (+, -, *, /) : ");
    scanf(" %c",&ch);
    switch(ch)
    {
        case '+':
            printf("\nyour addition is : %d",add(x,y));
            break;
        
        case '-':
            printf("\nyour subtraction is : %d",sub(x,y));
            break;
        
        case '*':
            printf("\n your multiplication is : %d",mul(x,y));
            break;
        case '/':
            z = div(x,y);
            printf("\n your divition is : %f",z);
            break;
        default :
            printf("\n enter valid value...!!");
    }
    return 0;
}
int add(int x, int y)
{
    return x+y;
}
int sub(int x, int y)
{
    return x-y;
}
int mul(int x, int y)
{
    return x*y;
}
int div(int x, int y)
{
    float z = x / y;
    return z;
}
