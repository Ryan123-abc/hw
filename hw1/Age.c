#include<stdio.h>

int main(){
	int a, b;
	printf("Please input the current year: ");
	scanf("%d", &a);
	printf("Please input the year of your brithday: ");
	scanf("%d", &b);
	printf("You are %d years old.\n", a-b);
}
