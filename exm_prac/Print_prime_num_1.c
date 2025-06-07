#include <stdio.h>
int main() {
	int st, end, f, i, j;
	printf("Enter starting value : ");
	scanf("%d", &st);
	printf("Enter ending value : ");
	scanf("%d", &end);
	
	if(st < 2) st = 2;
	printf("Prime numbers are between %d to %d is : ", st,end);
	for(i=st; i<=end; i++) {
		for(j=2,f=0; j<=i/2 && f==0; j++) {
			 if(i % j == 0) f=1;
		}
		if(f==0) printf("%d\t", i);
	}		
	
	return 0;
}	