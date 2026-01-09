#include<stdio.h>
int main()
{
    // Write a C program to rotate a 3×3 square matrix by 90 degrees clockwise.
    
    int x[3][3];
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            printf("Enter value : ");
            scanf("%d",&x[i][j]);
        }
        printf("\n");
    }

    for(int i=0;i<3;i++)
    {
        for(int j=2;j>=0;j--)
        {
            printf("%d  ",x[j][i]);
        }
        printf("\n");
    }
    return 0;
}