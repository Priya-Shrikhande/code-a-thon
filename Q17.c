/* Write a program to find the sum of two matrices of order 2*2 using
multidimensional arrays. */
#include<stdio.h>
int main()
{
    int a[2][2],b[2][2],c[2][2],i,j;      //take 2 matrix to perform sum and 1 sum for storing the sum
    printf("enter elemenys of matrix a=");
    for(i=0;i<2;i++)                  //taking elements of matrix a as input
    {
        for(j=0;j<2;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("\nmatrix a is=\n");          //printing matrix a
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            printf("\t%d",a[i][j]);
        }
        printf("\n");
    }
    printf("enter elemenys of matrix b=");  //taking elements of matrix b as input
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            scanf("%d",&b[i][j]);
        }
    }
    printf("\nmatrix b is=\n");         //printing matrix a
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            printf("\t%d",b[i][j]);
        }
        printf("\n");
    }
     printf("addition of a and b matrix is=\n");     //addition of two matrices
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            c[i][j]=a[i][j]+b[i][j];
            printf("\t%d",c[i][j]);
        }
        printf("\n");
    }
}
