// Write a program to print EVEN numbers from 1 to N using a while loop.
#include <stdio.h>
int main()
{
    int i, n;
    printf("enter the range = ");
    scanf("%d",&n);
    printf("Even numbers from 1 to %d are: \n", n);
    for(i=1; i<=n; i++)
    {
        if(i%2 == 0)
        {
            printf("%d\n", i);
        }
    }
}