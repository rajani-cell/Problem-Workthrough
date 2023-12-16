//Search in Rotated Sorted Array.



#include<stdio.h>

int search(int* nums, int numsSize, int target);
int search(int* nums, int numsSize, int target)
{
  int temp;
 for(int i=0;i<4;i++)
 {

  
      temp=nums[numsSize-1];
      for(int k=numsSize-1;k>0;k-- )
      {

         nums[k]=nums[k-1];

      }
       nums[0]=temp;
   
 }

 printf("nums=[");

 for(int i=0;i<numsSize;i++)
 {
    printf("%d,",nums[i]);

 }

 printf("]");

 int index_position=-1;

 
 
 for(int i=0;i<numsSize;i++)
 {

  if(target==nums[i])
  {
   index_position=i;
  }
 }


 if(index_position==-1)
 {
   printf("\n%d",index_position);

 }

  else
  {

   printf("\n%d",index_position);

  }
  

}



int main()
{

int nums[]={0,1,2,3,4,5,6,7};
int numsSize=sizeof(nums)/sizeof(nums[0]);

 int target=0;
 search(nums,numsSize,target);

 


  return 0;
}


