#include<stdio.h>

int main(){
	int a;
	printf("Please input a year: ");
	scanf("%d", &a);
	if( a<=0)
	{
		printf("ERROR!\n");
	}
	else if( a%400 == 0 )
	{
		printf("Leap Year\n");
	}
	else if( a%100 == 0)
	{
		printf("Not a Leap Year\n");
	}
	else if( a%4 == 0)
	{
		printf("Leap Year\n");
	}
}
