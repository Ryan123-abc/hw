#include<stdio.h>

int main(){
	int a, b;
	printf("How much is the hourly payment? ");
	scanf("%d", &a);
	printf("How many hours did you work in the last month? ");
	scanf("%d", &b);
	printf("Your salary is %d.\n", a*b);
}
