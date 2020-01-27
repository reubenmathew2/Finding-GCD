
//iterative
#include <stdio.h>
int findGCD(int arr[], int n);
int gcd(int a, int b);
int main() 
{ 
    int arr[] = { 2, 4, 6, 8, 16 }; 
    int n = sizeof(arr) / sizeof(arr[0]); 
    printf("G.C.D. is %d", findGCD(arr, n)); 
    return 0; 
} 
int gcd(int a, int b) 
{ 
    int c, d;
	while(b % a!=0)
	{
		d = a;
		c = b % a;
		a = c;
		b = d;
	}
	return a;
} 
int findGCD(int arr[], int n) 
{ 
    int result = arr[0]; 
    for (int i = 1; i < n; i++) 
    { 
        result = gcd(arr[i], result); 
  
        if(result == 1) 
        { 
           return 1; 
        } 
    } 
    return result; 
} 
  
