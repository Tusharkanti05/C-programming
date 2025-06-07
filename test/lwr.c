#include <stdio.h>
void rec(int,int);
void rec(int n, int m){
	if(n>m) return;
	printf("%d\t", n);
	rec(n+1,m);
	return;
}

int main(){
	int m, n;
	printf("Enter starting value : ");
	scanf("%d", &n);
	printf("Enter ending value : ");
	scanf("%d", &m);

	rec(n,m);
	return 0;
}