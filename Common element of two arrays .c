//Common element of two arrays
#include<stdio.h>
int main()
{
  int arr1[100],arr2[100];
  int size;
  
  printf("Enter the size of array :");
  scanf("%d",&size);
  
  printf("Enter the element of array 1 :");
  for(int i=0;i<size;i++)
  {
      scanf("%d",&arr1[i]);
  }
  
  
   printf("Enter the element of array 2 :");
  for(int j=0;j<size;j++)
  {
      scanf("%d",&arr2[j]);
  } 
  
  
  printf("Common element of two arrays :\n");
  
  for(int i=0;i<size;i++)
  {   for(int j=0;j<size;j++)
      {
      if(arr1[i]==arr2[j])
      {
          printf("%d ",arr1[i]);
          
          
      }
      
      }
      
  }
  
  
return 0;
   
}
