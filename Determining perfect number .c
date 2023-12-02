//Determining perfect number
#include<stdio.h>
int main()
{
  int num,sum=0,i;
  printf("Enter positive integer :");
  scanf("%d",&num);
  
 for(i=1;i<num;i++)
 {
     if(num%i==0)
     {
      sum=sum+i;
       printf("%d ",i);
      
     }
    
 }
 
 printf("\nSum of factor =%d\n",sum);
  
if(sum==num)
{
    printf("Perfect number");
}
else
{
 printf("It is not a Perfect number");   
}
  
  
return 0;
   
}
