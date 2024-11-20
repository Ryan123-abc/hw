#include <stdio.h>

int main() {
    	int n;
   	printf("Please input an integer greater than or equal to 3: ");
    	scanf("%d", &n);

    	if (n < 3) {
        	printf("Input Error!\n");
        	return 0;
    	}

    	for (int i = 1; i <= n; i++) {
        	for (int j = 0; j < n - i; j++) {
            		printf(" ");
        	}
        	for (int j = 0; j < 2 * i - 1; j++) {
            		printf("+");
        	}
        	printf("\n");
    	}

    	for (int i = n - 1; i >= 1; i--) {
        	for (int j = 0; j < n - i; j++) {
            		printf(" ");
        	}	
       		for (int j = 0; j < 2 * i - 1; j++) {
        		printf("+");
    		}
		printf("\n");
	}

    	return 0;
}



