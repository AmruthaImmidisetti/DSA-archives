/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* twoSum(int* nums, int numsSize, int target, int* returnSize) 
{
    int i,k,l,q,j;
    int *res=(int *)malloc(sizeof(int)*2);
    *returnSize=2;
    for(i=0;i<numsSize-1;i++)
    {
        k=nums[i];
        l=i;
        for(j=i+1;j<numsSize;j++)
        {
            if(k+nums[j]==target) 
            {
                q=j;
                res[0]=l;
                res[1]=q;
            }
        }
    }
    return res;
}