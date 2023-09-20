//Write a program to read an integer and print its multiplication table
#include <stdio.h>
void main()
{
   int i,n;
   printf("Input the number to calculate its table= ");
   scanf("%d",&n);
   for(i=1;i<=10;i++)
   {
     printf("%d X %d = %d \n",n,i,n*i);
   }
} 
