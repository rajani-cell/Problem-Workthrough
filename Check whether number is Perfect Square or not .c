//C program to check whether number is Perfect Square or not.
#include<stdio.h>
#include<math.h>


int main()
{
  int number;
  printf("Enter number :");
  scanf("%d",&number);


  double fvar;
  int ivar;

  fvar=sqrt(( double)number);
  ivar=(int)fvar;


if(fvar==ivar)
{
    printf("%d is Perfect Squar.",number);
   
}

else
{
  printf("%d is not Perfect Squar.",number);
}



return 0;

}
