#include<stdio.h>
int check(char word[30])
{
    int count = 0;
    for(int i=0;word[i] != '\0'; i++)
    {
        if(word[i] == 'h')
        {
            count++;
        }
    }
    return count;
}
int main()
{
    char word[30], ch;
    printf("Enter word : ");
    int i = 0;
    while (ch != '\n')
    {
        scanf("%c",&ch);
        word[i] = ch;
        i++;
    }
    printf("%d",check(word));
    return 0;
}