/* Write a program in C to read any Month Number in integer and display Month name in
the word.(using switch case). */
#include<stdio.h>
int main()
{
    int n;                // n is variable to store the number of month
    printf("enter the number for month= ");
    scanf("%d",&n);
    switch(n)
    {
        case 1:
        printf("\nJANUARY");
        break;

        case 2:
        printf("\nFEBRUARY");
        break;

        case 3:
        printf("\nMARCH");
        break;

        case 4:
        printf("\nAPRIL");
        break;

        case 5:
        printf("\nMAY");
        break;

        case 6:
        printf("\nJUNE");
        break;

        case 7:
        printf("\nJULY");
        break;

        case 8:
        printf("\nAUGUST");
        break;

        case 9:
        printf("\nSEPTEMBER");
        break;

        case 10:
        printf("\nOCTOBER");
        break;

        case 11:
        printf("\nNOVEMBER");
        break;

        case 12:
        printf("\nDECEMBER");
        break;

        default:
        printf("\nINVALID OPTION");
    }
}