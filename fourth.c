#include<stdio.h>
int main()
{
    // loops

    // for loop
    printf("\n for loop");
    for(int i=1;i<=5;i++)
    {
        printf("\n%d",i);
    }

    // while loop
    printf("\nwhile loop");
    int i=1;
    while (i<=5)
    {
        printf("\n%d",i); 
        i++;
    }

    // do while loop
    printf("\ndo while loop");
    int j=1;
    do
    {
        printf("\n%d",j);
        j++;
    } while(j<=5);
    
    // continue 
    printf("\ncontinue");
    for(int i=1;i<=5;i++)
    {
        if(i == 2)
        {
            continue;
        }
        printf("\n%d",i); 
    }

    // break
    printf("\nbreak");
    for(int i=1;i<=5;i++)
    {
        if(i == 2)
        {
            break;
        }
        printf("\n%d",i); 
    }

    // Nested Loops
    printf("\nNested Loop");
    for(int i=1;i<=5;i++)
    {
        for(int j=1;j<i;j++)
        {
            printf("%d",j);
        }
        printf("\n");
    }

    return 0;
}