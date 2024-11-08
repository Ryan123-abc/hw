#include<stdio.h>
#include<math.h>

int main(){
	int a, b, c;
	printf("Please input total duration of the call(HH:MM:SS): ");
	scanf("%d:%d:%d", &a, &b, &c);
	printf("The total duration of your call is %02d:%02d:%02d and your phone bill is %0.1f dollars.\n", a, b, c, floor(((a*3600+b*60+c)*0.045)*10)/10);
}
