#include<stdio.h>
// user difined data type
struct student      
{
    int roll;
    char name[50];
    char program[30];
    int sem;
    float cgpa;
} s1;

int main()
{
    // input 
    printf("Enter your Roll No. : ");
    scanf("%d", &s1.roll);
    printf("Enter your Name : ");
    scanf("%s", s1.name);
    printf("Enter your Program : ");
    scanf("%s", s1.program);
    printf("Enter your SEM : ");
    scanf("%d", &s1.sem);
    printf("Enter your CGPA : ");
    scanf("%f", &s1.cgpa);

    // print
    printf("\nRoll No. : %d", s1.roll);
    printf("\nName : %s", s1.name);
    printf("\nProgram : %s", s1.program);
    printf("\nSEM : %d", s1.sem);
    printf("\nCGPA : %f", s1.cgpa);

    return 0;

}