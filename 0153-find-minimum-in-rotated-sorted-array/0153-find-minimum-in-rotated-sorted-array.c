void bubble_sort(int *nums,int numsSize)
{
	int i,j;
   for(i=0;i<numsSize;i++)
   {
   	for(j=0;j<numsSize-1;j++)
   	{
	   
   		if(nums[j]>nums[j+1])
   		{
   		 int t;
   		 t=nums[j];
   		 nums[j]=nums[j+1];
   		 nums[j+1]=t;
		}
		}
		 }	
   }

int findMin(int* nums, int numsSize)
{
  
    bubble_sort(nums,numsSize);
    int k=nums[0];
   return k;
}
