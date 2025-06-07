#include<stdio.h>
int main(){
	int s=1000,e=3000,n,i,f,c=0;

	for(n=s;n<=e;n++){
		for(i=2,f=0;i<=n/2&&f==0;i++){
			if(n%i==0){
				f=1;
			}
		}

		if(f==0){
			printf("%d  ",n);
            c++;
		}
	}
    printf("\n count : %d",c);
	return 0;
}