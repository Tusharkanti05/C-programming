#include <stdio.h>
int main() {
	int a[20],i, j, n, temp;
	printf("How many data enter : ");
	scanf("%d", &n);

	for(i=0; i<n; i++) {
		printf("Enter data : ");
		scanf("%d", &a[i]);
	}

	printf("\nDisplay before sortimg : ");
	for(i=0; i<n; i++){
		printf("%d\t", a[i]);
	}

	//sorting
	for(i=1; i<n;i++){
		for(j=0; j<n-i; j++){
			if(a[j] < a[j+1]){
				temp = a[j];
				a[j] = a[j+1];
				a[j+1] = temp;
			}
		}
	}
	printf("\nDisplay after sortimg : ");
	for(i=0; i<n; i++){
		printf("%d\t", a[i]);
	}

	return 0;

}