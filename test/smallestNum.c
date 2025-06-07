//matrix addition 

#include<stdio.h>

int main()
{
  int a[3][4],b[3][4],c[3][4];
  int i,j;

//create 1st matrix a

  for(i=0;i<3;i++)
  {
    for(j=0;j<4;j++)
    {
      printf("\n enter 1st matrix data = ");
      scanf("%d",&a[i][j]);
      }
  }
//create 2nd matrix b

  for(i=0;i<3;i++)
  {
    for(j=0;j<4;j++)
    {
      printf("\n enter 2nd  matrix data = ");
      scanf("%d",&b[i][j]);
      }
  }
  
//add 2 matrix 

  for(i=0;i<3;i++)
  {
    for(j=0;j<4;j++)
    {
      c[i][j] = a[i][j]+b[i][j];
    }
  }
  
 //display a matrix
 
 printf("\n\n Display 1st matrix \n ");
 for(i=0;i<3;i++)
  {
    for(j=0;j<4;j++)
     {
       printf("%d\t",a[i][j]); 
     }
      printf("\n");
  }
  
//Display b matrix 

 printf("\n\n Display 2nd matrix \n ");
 for(i=0;i<3;i++)
  {
    for(j=0;j<4;j++)
     {
       printf("%d\t",b[i][j]); 
     }
      printf("\n");
  }
  
//Display c matrix 
 printf("\n\n Display the addition of matrix \n ");

  for(i=0;i<3;i++)
  {
    for(j=0;j<4;j++)
     {
       printf("%d\t",c[i][j]); 
     }
      printf("\n");
  }
  return 0;
}