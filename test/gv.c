#include<stdio.h>
int main(){
   int a[100];
   int n,k,i,j;
   printf("\n how many data enter = ");
   scanf("%d",&n);

   // create array 
    for(i=0;i<n;i++){
      printf("\n enter data = ");
      scanf("%d",&a[i]);
   }
   // Display 
   printf("\n Data are : ");
   for(i=0;i<n;i++){
      printf("%d\t",a[i]);
   }

   // remove duplicate data 
   for(i=0;i<n;i++){
      for(j=i+1;j<n;j++){
         if(a[i]==a[j]){
            //remove data 
            for(k=j;k<n-1;k++)   a[k]=a[k+1];
            n--;
            j--;
         }
      }
   }
   printf("\n Data are : ");
   for(i=0;i<n;i++){
      printf("%d\t",a[i]);
   }

   return 0;
}