#include <stdio.h>

int match(const char *a, const char *num, int length) {
    for (int i = 0; i < length; i++) {
        if (a[8 - length + i] != num[10 - length + i]) {
            return 0; 
        }
    }
    return 1; 
}

int main() {
    char a[5][9];  
    char num[100][11]; 

    for (int i = 0; i < 5; i++) {
        scanf("%8s", a[i]);
    }

    for (int i = 0; i < 100; i++) {
        scanf("%10s", num[i]);
    }

    int prize[] = {10000000, 2000000, 200000, 40000, 10000, 4000, 1000, 200};
    int prize_length[] = {8, 8, 8, 7, 6, 5, 4, 3};

    for (int i = 0; i < 100; i++) {
        for (int j = 0; j < 5; j++) { 
            for (int k = 0; k < 8; k++) { 
                if (j > 1 && k == 0) continue; 
                if (match(a[j], num[i], prize_length[k])) {
                    printf("%s %9d\n", num[i], prize[k]);
                    break; 
                }
            }
        }
    }

    return 0;
}
				
			
