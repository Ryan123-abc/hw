#include<stdio.h>

int main(){
	int a, b;
	printf("Please input two numbers(a,b): ");
	scanf("%d,%d", &a, &b);
	
	int num1, num2;

	if(a>b){
		num1 = a;
		num2 = b;
	}else{
		num1 = b;
		num2 = a;
	}

	for(int i = num1; i <= num1*num2; i++){
		if(i%num1==0 && i%num2==0){
			printf("LCM(%d, %d) = %d\n", a, b, i);
			return 0;
		}
	}
}
