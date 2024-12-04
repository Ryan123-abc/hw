#include<stdio.h>

int main(){
	int num[9];
	printf("Enter data: ");
	for(int i=0; i<10; i++){
		scanf("%d", &num[i]);
	}
	int a;
	printf("Enter a number to find: ");
	scanf("%d", &a);
	
	int th=0;
	for(int i=0; i<10; i++){
		if(a==num[i]){
			th=i+1;
		}
	}

	if(th==0){
		printf("%d is not found\n", a);
		return 0;
	}else if(th==1){
		printf("%d is the 1st number.\n", a);
		return 0;
	}else if(th==2){
		printf("%d is the 2nd number.\n", a);
		return 0;
	}else if(th==3){
		printf("%d is the 3rd number.\n", a);
		return 0;
	}else{
		printf("%d is the %dth number.\n", a, th);
	}
}
