//Write a program to Calculate Product of Digits of a Number.
#include<stdio.h>
int main()
{
    int num,mul=1,r;
    printf("enter the number= ");
    scanf("%d",&num);
    while(num>0)
    {
        r=num%10;
        mul=mul*r;
        num=num/10;
        
    }
    printf("multiplication of digits of given number is %d",mul);

}