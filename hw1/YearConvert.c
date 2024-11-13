#include<stdio.h>

int main(){
	int a, b;
	printf("Please input a year in ROC: ");
	scanf("%d", &a);
	b = a + 1911;
	printf("ROC %d is AD %d.\n", a, b);
}
