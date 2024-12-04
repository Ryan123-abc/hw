#include<stdio.h>

int main(){
	int num[10];
	for(int i=0; i<10; i++){
		scanf("%d", &num[i]);
	}
	printf("original array: %d %d %d %d %d %d %d %d %d %d\n", num[0], num[1], num[2], num[3], num[4], num[5], num[6], num[7], num[8], num[9]);
	printf("reversed array: %d %d %d %d %d %d %d %d %d %d\n", num[9], num[8], num[7], num[6], num[5], num[4], num[3], num[2], num[1], num[0]);
}
