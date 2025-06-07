#include<stdio.h>
int main()
{
  int a[100];
  int i,loc,n,item;
// Array create 
  printf("\n how many data enter = ");
  scanf("%d",&n);
  
  for(i=0;i<n;i++)
   {
     printf("enter data "); 
     scanf("%d",&a[i]);
   }
// Array display 
   for(i=0;i<n;i++)
   {
     printf("%d\t",a[i]);
   }
//Searching 
   printf("\n enter searching data = ");  
   scanf("%d",&item);
   for(i=0,loc=-1;i<n && loc==-1;i++)
   {
       if(a[i]==item)
         loc=i;
   }
   if(loc==-1)
     printf("data is not found");
   else 
    printf("data is found, location is =%d",loc+1);
}