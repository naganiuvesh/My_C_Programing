#include<stdio.h>
int main()
{
    int x[5], sum = 0;
    // Q-1. input multipul value using array and print its sum

    for(int i=0;i<5;i++)
    {
        printf("Enter value : ");
        scanf("%d", &x[i]);
        sum += x[i];
    }
        printf("\nsum is : %d", sum);
        return 0;
}
