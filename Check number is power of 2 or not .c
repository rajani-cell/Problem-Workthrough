//C Program to check number is power of 2 or not.
#include<stdio.h>
int main()
{
  int number;
  printf("Enter number :");
  scanf("%d",&number);

  int orginal_number=number;


  int count=0;

  while(number !=1)
  {
  if(number%2!=0)
  {
    count++;
    break;
   
  }
  number=number/2;
  }


if(count==0)
{
    printf("%d is power of 2.",orginal_number);
   
}

else
{
  printf("%d is not power of 2.",orginal_number);
}




   return 0;
}
