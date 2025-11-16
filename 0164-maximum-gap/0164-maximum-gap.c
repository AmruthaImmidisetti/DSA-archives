#include<stdio.h>
void merge(int *nums,int l,int m,int h)
{
	int i,j,k,result[h-l+1];
	i=l;
	j=m+1;
	k=0;
	while(i<=m && j<=h)
	{
		if(nums[i]<=nums[j])
		{
			result[k]=nums[i];
			i++;
			k++;
		}
		else 
		{
			result[k]=nums[j];
			j++;
			k++;
		}
	}
	while(i<=m)
	{		
	result[k]=nums[i];
			i++;
			k++;
		
	}
	while(j<=h)
	{
		result[k]=nums[j];
			j++;
			k++;
		
	}
	k=0;
	for(i=l;i<=h;i++)
	{
		nums[i]=result[k];
		k++;
	}
}
void merge_sort(int*nums,int l,int h)
{
	if(l<h)
	{
		int m=(l+h)/2;
		merge_sort(nums,l,m);
		merge_sort(nums,m+1,h);
		merge(nums, l, m,h);
	}
}
int maximumGap(int* nums, int numsSize) 
{
    merge_sort(nums,0,numsSize-1);
    int max=0;
    for(int i=0;i<numsSize-1;i++)
    {
        int k=nums[i+1]-nums[i];
        if(k>max)
        {
            max=k;  
        }
       
    }
   return max;
}