#include<stdio.h>

int main(){
	int a, b;
	printf("Enter the total amount: ");
	scanf("%d", &a);
	printf("Enter the amount paid: ");
	scanf("%d", &b);
	
	if(a<1||b<1){
		printf("Invalid input\n");
		return 0;
	}else if(b-a<0){
		printf("Invalid input\n");
		return 0;
	}

	int c;
	c=b-a;
	
	int a1=0, a2=0, a3=0, a4=0, a5=0, a6=0, a7=0;
	if(c/1000!=0){
		a7 = c/1000;
		c = c-a7*1000;
	}else if(c/500!=0){
		a6 = c/500;
		c = c-a6*500;
	}else if(c/100!=0){
		a5 = c/100;
		c = c-a5*100;
	}else if(c/50!=0){
		a4 = c/50;
		c = c-a4*50;
	}else if(c/10!=0){
		a3 = c/10;
		c = c-a3*10;
	}else if(c/5!=0){
		a2 = c/5;
		c = c-a2*5;
	}else if(c/1!=0){
		a1 =c/1;
		c = c-a1*1;
	}
	
	printf("1    > %d\n", a1);
	printf("5    > %d\n", a2);
	printf("10   > %d\n", a3);
	printf("50   > %d\n", a4);
	printf("100  > %d\n", a5);
	printf("500  > %d\n", a6);
	printf("1000 > %d\n", a7);
}



	
