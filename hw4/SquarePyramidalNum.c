#include <stdio.h>

int main() {
    int n;
    long long sum = 0;

    printf("Please input an integer: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        sum += i * i;
        if (i == n) {
            printf("%d", i * i); 
        }
	else {
            printf("%d + ", i * i); 
        }
    }
    printf(" = %lld\n", sum);
    return 0;
}







