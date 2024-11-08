#include<stdio.h>

int main(){
	int a, b;
	printf("Please input a coordinate(x,y): ");
	scanf("%d,%d", &a, &b);
	if( -200==a || a==200 || -110==b || b==110 ){
		printf("On the boundary\n");
	}
	else if( -200 < a &&  a < 200  &&  -110 < b &&  b < 110 ){ 	
		printf("Inside\n");
	}	
	else{
		printf("Outside\n");
	}
}
