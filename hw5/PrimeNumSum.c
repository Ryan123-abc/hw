#include<stdio.h>

int main(){
	int a;
	printf("Please input an integer: ");
	scanf("%d", &a);
	if(a<1){
		printf("Input Error\n");
		return 0;
	}
	if(a==1 || a==2){
		printf("There isn't any prime number between 1 and 2.\n");
		return 0;
	}
	
	int sum = 0;
	int plus = 0;

	for(int i=2; i<a; i++){
		
		int prime = 1; 
		
		for(int j=2; j*j<=i; j++){
			if(i%j==0){
				prime =0;
				break;
			}
		}

		if(prime){
			if(plus) printf("+ ");
			printf("%d ", i);
			sum += i;
			plus = 1;
		}	
	}

	printf("= %d\n", sum);
	return 0;
}
	










				

