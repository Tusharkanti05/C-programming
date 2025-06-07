#include<stdio.h>
void fibo(int,int,int);

int main() {
    int n, fib1 = 0, fib2 = 1;
	printf("Enter the number of terms : ");
	scanf("%d", &n);
		
	if(n < 1) printf("Enter positive number");
	else if (n == 1){
		printf("%d", fib1);
	} else {
		printf("%d\t%d\t", fib1, fib2);
		if (n > 2) fibo(fib1, fib2, n-2);
	}
		
	return 0;
}

void fibo(int fib1,int fib2,int n) {
    int temp = fib1 + fib2;
    printf("%d\t", temp);
        
    if(n > 1)    fibo(fib2,temp, n-1);
}