#include<stdio.h>

int main(){
	int x;
	printf("x is allocated at memory address %p-%#lx.\n", &x, (unsigned long)(&x)+sizeof(x)-1);
}
