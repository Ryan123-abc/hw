#include<stdio.h>
#include<math.h>

int main(){
	int a, b, c;
	double s;
	printf("Please input the lengths of the three sides of the triangle(a,b,c): ");
	scanf("%d,%d,%d", &a, &b, &c);
	s = (a+b+c)/2.0;
	printf("Area of the triangle = %0.3lf.\n", sqrt(round(s*(s-a)*(s-b)*(s-c))));
}

	
	
