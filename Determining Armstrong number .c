//Determining Armstrong number
#include<stdio.h>
#include<math.h>


int main()
{
  int num;
  printf("Enter positive integer :");
  scanf("%d",&num);
  int orginal_num=num;
  int sum_of_qubic_digit=0;
  
  int reminder;
  
  while(num !=0)
  {
   reminder=num%10;
   sum_of_qubic_digit=sum_of_qubic_digit+pow(reminder,3);
   
   num=num/10;
  }
  
  printf("sum_of_qubic_digit = %d\n",sum_of_qubic_digit);
  
 if(sum_of_qubic_digit==orginal_num )
 {
     
   printf("Amstrong number.");
 }
 else

 {
   printf("It is not a Amstrong number.");   
 }
  
  
return 0;
   
}
