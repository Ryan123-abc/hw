#include<stdio.h>

int prime(int n){
	if(n<=1){
		return 0;
	}
	if(n<=3){
		return 1;
	}
	if(n%2==0 || n%3==0){
		return 0;
	}
	for(int i=5; i*i<=n; i+=6){
		if(n%i==0 || n%(i+2)==0){
			return 0;
		}
	}
}

int main(){
	int a;
	printf("Please input an integer: ");
	scanf("%d", &a);
	if(prime(a)){
		printf("The integer %d is a prime number.\n", a);
	}
	else{
		printf("The integer %d is not a prime number!\n", a);
	}
}





