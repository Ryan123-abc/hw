#include<stdio.h>

int main(){
	int num[3][3];
	printf("Enter data:\n");
	for(int i=0; i<3; i++){
		for(int j=0; j<3; j++){
			scanf("%d", &num[i][j]);
		}
	}
	int det;
	det = num[0][0]*num[1][1]*num[2][2]+num[0][1]*num[1][2]*num[2][0]+num[0][2]*num[1][0]*num[2][1]-num[0][2]*num[1][1]*num[2][0]-num[0][0]*num[1][2]*num[2][1]-num[0][1]*num[1][0]*num[2][2];
	printf("det(A) result: %d\n", det);
}

