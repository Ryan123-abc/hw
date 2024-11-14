#include <stdio.h>

int main() {
	int a, b, c, d;

	printf("Please input two number(a,b): ");
	scanf("%d,%d", &a, &b);

	if (a <= 0 || b <= 0 || 10000 <= a || 10000 <= b){
		printf("Error!\n");
        	return 0;
    	}
	c = a;
	d = b;
    	while (c != d){
        	if (c > d){
            		c = c - d;
        	} 
		else{
            		d = d - c;
        	}
    	}

    	printf("GCD(%d, %d) = %d\n", a, b, c);
    	return 0;
}

