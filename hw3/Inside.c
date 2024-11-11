#include<stdio.h>

int main(){
	int a, b;
	printf("Please input a coordinate(x,y): ");
	scanf("%d,%d", &a, &b);
	if(a<-200 || 200<a || b<-110 || b>100){
		printf("Outside\n");
	}
	else if( -200==a || a==200 || -110==b || b==110 ){
		printf("On the boundary\n");
	}
	else if( -200 < a &&  a < 200  &&  -110 < b &&  b < 110 ){ 	
		printf("Inside\n");
	}	
}
