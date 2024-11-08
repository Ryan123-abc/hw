#include<stdio.h>

int main(){
	int a, b, num;
	printf("Please input an integer: ");
	scanf("%d", &a);
	num = a;
	if(a<1){
		printf("Input error!\n");
		return 0;
	}
	while( num>1 ){
		num/=2;
		b++;
	}
	for(int i=2; i<=1024; i=i*2){
		if(a%i==0){
			printf("%d is 2 to the power of %d.\n", a, b);
			break;
		}
		else{
			printf("%d is not a power of 2.\n", a);
			break;
		}
	}
}
