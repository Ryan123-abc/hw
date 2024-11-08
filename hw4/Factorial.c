#include<stdio.h>

int main(){
	int a;
	long long sum=1;
	printf("Please input an integer: ");
	scanf("%d", &a);
	
	if(a<0 || a>20){
		printf("Input Error\n");
		return 0;
	}
	else if(a==0){
		printf("0! = 1\n");
		return 0;
	}
	else if(a==1){
		printf("1! = 1\n");
		return 0;
	}
	else{
		printf("%d! = ", a);
		for(int i=1; i<=a; i++){
			sum *= i;
			if(i==a){
				printf("%d = ", i);
			}
			else{
				printf("%d * ", i);
			}
		}
	printf("%lld\n", sum);
	return 0;
	}
}
