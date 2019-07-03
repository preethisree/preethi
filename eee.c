#include<conio.h>
int findSum(int N, int K) 
{ 
    int ans = 0; 
  
    // Iterate from 1 to N && 
    // evaluating and adding i % K. 
    for (int i = 1; i <= N; i++) 
        ans += (i % K); 
  
    return ans; 
} 
