#include<stdio.h>

int main(){
	char a, b;
	int c;
	printf("Please input a uniform-invoice number: ");
	scanf("%c%c%d", &a, &b, &c);
	printf("The last 3 digits are %03d.\n", c%1000);
}
