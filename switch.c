#include<stdio.h>
int main()
{
    // Conditional statment
    int age;
    printf("Enter your age : ");
    scanf("%d",&age);
    if(age >= 18)
    {
        printf("\nYou are eligible for driving licence.");
    }else if(age <= 10)
    {
        printf("\nAre you joking with me?");
    }else if(age == 0)
    {
        printf("\nAre you serious?");
    }else{
        printf("\nYou are NOT eligible for driving licence.");
    }

    // Ternary
    int a = 12;
    a < 10 ? printf("\n a < 10") : printf("\na < 10");

    // switch
    int x, y;
    char ch;
    printf("\nEnter first value : ");
    scanf("%d",&x);
    printf("Enter second value : ");
    scanf("%d",&y);
    printf("\nEnter operator (+/-) : ");
    scanf(" %c", &ch);
    switch (ch)
    {
    case '+':
        printf("\n your sum is : %d",(x+y));
        break;
     
    case '-':
        printf("\n your subtraction is : %d",(x-y));
        break;

    default:
        printf("\nEnter valid operator");
        break;
    }

    return 0;
}
