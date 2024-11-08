#include<stdio.h>

int main(){
	int a, b, c, d;
	printf("Please input a triangle's 3 sides(a,b,c): ");
	scanf("%d,%d,%d", &a, &b, &c);
	if(a>b)
	{
		d=a; a=b; b=d;
	}
	if(b>c)
	{
		d=b; b=c; c=d;
	}
	if(a>b)
	{
		d=a; a=b; b=d;
	}
	if( a+b<=c || a+c<=b || b+c<=a)
	{
		printf("Not a Triangle\n");
	}
	else if( a*a + b*b == c*c)
	{	
		printf("Right Triangle!\n");
	}
	else if( a*a + b*b > c*c)
	{
		printf("Acute Triangle!\n");
	}	
	else if( a*a + b*b < c*c)
	{
		printf("Obtuse Triangle!\n");
	}	
}
