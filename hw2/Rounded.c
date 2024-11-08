#include<stdio.h>
#include<math.h>

int main(){
	float a;
	printf("Floating point number: ");
	scanf("%f", &a);
	printf("The rounded value is %d.\n", (int)round(a));
}
