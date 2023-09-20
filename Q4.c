//Write a program to compare two no by using the ternary operator in c.
#include<stdio.h>
int main()
{
    int a,b;
    printf("\nEnter the two =");
    scanf("%d%d",&a,&b);
    a==b?printf("Given values are equal:%d %d",a,b):printf("Given two values are not equal:%d %d",a,b);
}