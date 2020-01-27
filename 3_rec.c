
//logic 3 recursive
#include <stdio.h>
int hcf(int n1, int n2, int c);
int c;
int main() 
{
    int n1, n2;
    printf("Enter two positive integers: ");
    scanf("%d %d", &n1, &n2);
    if(n1 < 0)
        n1 = n1 * -1;
    if(n2 < 0)
        n2 = n2 * -1;
    c = n1>n2?n1:n2;
    if(n1 == 0|| n2 == 0)
    	printf("G.C.D of %d and %d is %d", n1, n2, c);
    else
    	printf("G.C.D of %d and %d is %d.", n1, n2, hcf(n1, n2, c));
    return 0;
}
int hcf(int n1, int n2, int c) 
{
	if(c % n1 == 0 && c % n2 ==0)
		return (n1 * n2)/c;
	else
		return hcf(n1, n2, c+1);
}
