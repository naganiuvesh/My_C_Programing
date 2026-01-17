#include<stdio.h>
int main()
{
    FILE *fptr;
    fptr = fopen("Newtest.txt", "r");
    if(fptr == NULL)
    {
        printf("File is not exist\n");
    }else{
        printf("File is exist\n");
    }
    fclose(fptr);
    return 0;
}