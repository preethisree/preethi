#include <stdio.h>

 
int main()
{
   int n, reverse = 0;
 
   printf("Enter a number to reverse\n");
   scanf("%d", &n);
 
   while (n != 0)
   {
      reverse = reverse * 100;
      reverse = reverse + n%100;
      n       = n/100;
   }
 
   printf("Reverse of entered number is = %d\n", reverse);
 
   return 0;
}
