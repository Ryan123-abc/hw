#include<stdio.h>

int main(){
	int a, b;
	printf("Please input an integer: ");
	scanf("%d", &a);
	printf("Decimal(%d) = Hexadecimal(%x).\n", a, a);
	printf("\n");
	printf("Please input an integer in octal: ");
	scanf("%o", &b);
	printf("Octal(%o) = Hexadecimal(%x).\n", b, b);
}

