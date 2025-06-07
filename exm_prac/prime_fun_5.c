#include <stdio.h>
void prime(int);

int main() {
	int n;
	printf("Enter number : ");
	scanf("%d", &n);
	
	prime(n);
	
	return 0;
}

void prime(int n){
	int i,f;
	
	if(n < 1){
		printf("Enter positive number\n");
	} else if(n == 1){
		printf("1 is not a prime number\n");
	} else {
		for(i=2, f=0; i<n/2 && f==0; i++) {
			if(n % i == 0) f = 1;
		}
	
		if(f == 0) printf(" %d is a prime number\n", n);
		else printf("%d is not a prime number\n", n);
	}
}