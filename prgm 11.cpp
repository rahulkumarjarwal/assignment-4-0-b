#include <iostream>
using namespace std;
int hcf(int x,int y);//function prototype
int main() {
	// Program to find GCD (HCF) of two numbers using recursion
	int a,b,,d,r,gcd;
	printf("Enter the two number:");
	scanf("%d%d,",&a,&b);
	if(a>b);
	{
	gcd=hcf(a,b);	
	}
	{
	if else
		gcd=hcf(b,a);
	}
	printf("HCF is=%d",d);
}
int hcf(int x,int y);
{
	int r=1;
	while(r!=0) 
	{
	r=x%y;	
	x=y;
	y=r;}
	return (x);
}
}
