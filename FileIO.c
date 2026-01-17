#include<stdio.h>
int main()
{
    FILE *fptr;
    // read 
    fptr = fopen("test.txt", "r");
    char ch[50];
    fscanf(fptr, "%s", ch);
    printf("character is = %s", ch);
    fclose(fptr);
    return 0;
}

