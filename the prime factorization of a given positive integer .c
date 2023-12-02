// the prime factorization of a given positive integer.
#include<stdio.h>
int main()
{
    int num,count;
    printf("Enter the number :");
    scanf("%d",&num);
     
    
   printf("prime factor :\n");
   for(count=2;num>1;count++)
   {

    while(num%count==0)
    {
        printf("%d ",count);
        num=num/count;
    }


}
return 0;
   
}
