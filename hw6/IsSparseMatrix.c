#include<stdio.h>

int main(){
	printf("Enter data:\n");
	int a[3][3];
	int zero=0;
	int total=9;
	for(int i=0; i<3; i++){
		for(int j=0; j<3; j++){
			scanf("%d", &a[i][j]);
			if(a[i][j]==0){
				zero++;
			}
		}
	}

	if(zero > total/2){
		printf("It is a sparse matrix!\n");
	}
	else{
		printf("It is not a sparse matrix!\n");
	}

	return 0;
}
