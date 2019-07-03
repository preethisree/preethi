#include <stdio.h> 
  
int main() 
{ 
    int b; 
  
    printf("Enter the number b: "); 
    scanf("%d", &b); 
  
    if (b > 0) 
        printf("%d is positive.", b); 
    else if (b < 0) 
        printf("%d is negative.", b); 
    else if (b == 0) 
        printf("%d is zero.", b); 
  
    return 0; 
} 
