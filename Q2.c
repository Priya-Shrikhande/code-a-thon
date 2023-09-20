//Write a function in C that reverses a given string in-place without using string function.
#include <stdio.h>
int main()
{
   char a[50], rev[50];
   int i, j, count= 0;

   printf("Input a string\n");
   gets(a);
   while (a[count] != '\0')      // Calculating string length
      {
        count++;
      }

   j = count - 1;

   for (i = 0; i< count; i++) {
      rev[i] = a[j];
      j--;
   }

   rev[i] = '\0';

   printf("%s\n", rev);

   return 0;
}