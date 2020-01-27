
//logic 1 recursive
#include <stdio.h>
int hcf(int a, int b);
int a, b;
int main()
{
    int n1, n2;
    printf("Enter two positive integers: ");
    scanf("%d %d", &n1, &n2);
    a = n1<n2?n1:n2;
    b = n1<n2?n2:n1;
    if(a < 0)
        a = a * -1;
    if(b < 0)
        b = b * -1;
    printf("G.C.D of %d and %d is %d.", n1, n2, hcf(a, b));
    return 0;
}
int hcf(int a, int b) 
{ 
    if (a == 0) 
        return b; 
    return hcf(b % a, a); 
} 

