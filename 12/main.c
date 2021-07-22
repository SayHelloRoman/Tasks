#include <stdio.h>
#include <math.h>


int main(){
	int a, b;
	printf("Input first leg: ");
	scanf("%d", &a);
	printf("Input second leg: ");
	scanf("%d", &b);

	printf("%f", sqrt(pow(a, 2) + pow(b, 2)));
	return 0;
}