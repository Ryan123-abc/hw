#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
	int a, b;
	srand(time(NULL));
	a = rand()%6+1;
	b = rand()%6+1;
	printf("Throwing two dice...\n");
	printf("One dice shows %d and another dice shows %d.\n", a, b);
	printf("The score is %d + %d = %d.\n", a, b, a+b);
}
