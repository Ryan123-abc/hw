#include<stdio.h>

int main(){
	int a;
	printf("Please input an intenger: ");
	scanf("%d", &a);
	if(a<1){
		printf("Input Error\n");
		return 0;
	}
	if(a==2){
		printf("There isn't any prime number between 1 and 2.\n");
		return 0;
	}

	for(int i=2; i<a; i++){
		for(int j=1; j<=i; j++){
			if(j%i==0 && i!=j){
			}else if(j%i==0 && i==j){
				printf("%d", i);
			}


				

