#include <stdio.h>
int main()
{
        // it can change 
    char *canChange = "uvesh";  
    puts(canChange);
    canChange = "nagani";
    puts(canChange);

        // it can't change 
    char canNotChange[] = "uvesh";
    puts(canNotChange);
    // canNotChange[] = "nagani";      //   it's not work, you can try.

    return 0;   
}
