#include<stdio.h>

int main(){
	int month;
	printf("Enter n month: ");
	scanf("%d", &month);

	if(month<=0 || month>40){
		printf("Error! Out of range.\n");
		return 0;
	}
	
    	int new[month], grow[month], matured[month], total[month];
    
    	new[0] = 1;
    	grow[0] = 0;
    	matured[0] = 0;
    	total[0] = 1;

    	for (int i = 1; i < month; i++) {
        	matured[i] = grow[i-1] + matured[i - 1];
        	new[i] = matured[i];
        	grow[i] = new[i - 1];
        	total[i] = new[i] + grow[i] + matured[i];
	}

    	printf("|(n)th     |newborn   |growing   |matured   |total     \n");

    	for (int i = 0; i < month; i++) {
        	printf("|%-10d|%-10d|%-10d|%-10d|%-10d\n", 
               	i + 1, new[i], grow[i], matured[i], total[i]);
    	}	

    	return 0;
}
