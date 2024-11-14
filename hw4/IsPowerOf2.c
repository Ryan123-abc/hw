#include<stdio.h>

int main(){
	int num;
	printf("Please input an integer: ");
	scanf("%d", &num);
	if(num<1){
		printf("Input error!\n");
		return 0;
	}

	if((num & (num - 1)) == 0){
        	int power = 0;
        	int temp = num;
        
		while(temp > 1){
            		temp /= 2;
            		power++;
        	}
        
		printf("%d is 2 to the power of %d.\n", num, power);
	} 
	else{
        	printf("%d is not a power of 2.\n", num);
    	}

   	return 0;
}
