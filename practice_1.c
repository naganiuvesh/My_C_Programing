#include <stdio.h>
int main()
{
    // take a string input from the user using %c. 
    char x[100];
    char ch;
    int i = 0;

    while(ch != '\n')
    {
        scanf("%c",&ch);
        x[i] = ch;
        i++;
    }

    x[i] = '\0';
    puts(x);
    return 0;
}