#include<stdio.h>

int main(){
	int n;
	printf("Please input the number of the layer of the pyramid: ");
	scanf("%d", &n);
	if(0 >= n || n > 17){
		printf("Input error!\n");
		return 0;
	}else if(n%2==0){
		printf("Input error!\n");
		return 0;
	}

	for(int i=1; i<=(n+1)/2; i++){
		printf("|");
		for(int j=1; j<=(n-(i*2-1))/2; j++){
			printf(" ");
		}
		for(int j=i; j<=i; j--){
			printf("%d", i);
		}
		for(int j=1; j<=(n-(i*2-1))/2; j++){
			printf(" ");
		}
		printf("|\n");
	}
}

