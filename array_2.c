#include<stdio.h>
int table(int x[2][10]);
int main()
{
    int x[2][10];
    table(x); 
    for(int i=0;i<10;i++)
    {
        printf("%d\t",x[0][i]);
    }
    printf("\n\n");
    for(int i=0;i<10;i++)
    {
        printf("%d\t",x[1][i]);
    }
    return 0;
}
int table(int x[2][10])
{
    for(int i=0;i<10;i++)   
    {
        x[0][i] = (i + 1) * 2;
    }
    printf("\n\n");
    for(int i=0;i<10;i++)   
    {
        x[1][i] = (i + 1) * 3;
    }
}