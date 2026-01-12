#include <stdio.h>
#include <string.h>
int main()
{
    // string library function -- <string.h>

    // 1. strlen
    char name[] = "uvesh";
    printf("%d", strlen(name));

    // 2. strcpy
    char str1[] = "uvesh";
    char str2[] = "nagani";
    strcpy(str1,str2);
    printf("\nstr1 = %s",str1);
    printf("\nstr2 = %s",str2);

    // 3. strcat
    char str3[] = "uvesh ";
    strcat(str3, str2);
    printf("\nstrcat = %s", str3);

    // 4. strcmp
    char first[] = "name";
    char second[] = "hello";        // comper ASCII value    
    int cmp = strcmp(second, first  );
    printf("\n%d", cmp);
    
    return 0;
}