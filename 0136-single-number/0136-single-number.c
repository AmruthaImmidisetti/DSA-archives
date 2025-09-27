int singleNumber(int* nums, int numsSize) 
{
    int ans;
    for(int i=0;i<numsSize;i++)
    {
        int c=0;
        int k=nums[i];
        for(int j=0;j<numsSize;j++)
        {
            if(k==nums[j])  c++;
        }
        if(c==1)       
        {
            ans=nums[i];
        break;
        }
    }
    return ans;
}