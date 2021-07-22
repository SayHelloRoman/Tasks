#include <stdio.h>
#include <math.h>


int main(){
    int n, x = 0;

	printf("Input N: ");
	scanf("%d", &n);

    for(int i = 1; i <= n; i++){
        x += i;
    }

    printf("%d\n", x);
    printf("%d\n", n * (n+1) / 2);
    return 0;
}