#include<stdio.h>

int main(){
	double a;
	printf("Please input an area in square meters: ");
	scanf("%lf", &a);
	printf("%lf square meters = %lf ping.\n", a, a*0.3025);
}
