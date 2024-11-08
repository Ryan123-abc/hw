#include<stdio.h>

int main(){
	int a, b, c, d;
	printf("Please input an IP address: ");
	scanf("%d.%d.%d.%d", &a, &b, &c, &d);
	if( 0<=a && a<=255 && 0<=b && b<=255 && 0<=c && c<=255 && 0<=d && d<=255)
	{
		printf("The IP address %d.%d.%d.%d is valid.\n", a, b, c, d);
	}
	else
	{
		printf("The IP address %d.%d.%d.%d is invalid.\n", a, b, c, d);
	}
}
