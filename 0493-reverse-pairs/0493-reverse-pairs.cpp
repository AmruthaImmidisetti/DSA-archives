class Solution {
 private:
void merge(vector<int>&A,int l,int m,int h,int& revCnt)
{
    int q=m+1;
    for(int i=l;i<=m;i++){
        while(q<=h && A[i] > 2*(long long)A[q]){
            q++;
        }
        revCnt+=q-(m+1);
    }
    int size=(h-l+1);
    vector<int>result(size,0);
	int i=l,j=m+1,k=0;
	while(i<=m && j<=h)
	{
		if(A[i]<A[j])
		{
			result[k++]=A[i++];
		}
		else 
		{
			result[k++]=A[j++];
		}
	}
	while(i<=m)
	{		
	result[k++]=A[i++];
	}
	while(j<=h)
	{
		result[k++]=A[j++];
	}
	k=0;
	for(i=l;i<=h;i++)
	{
		A[i]=result[k++];
	}
}
void merge_sort(vector<int>&nums,int l,int h,int& revPCnt)
{
	if(l>=h){
        return;
    }
	int  m=(l+h)>>1;
	merge_sort(nums,l,m,revPCnt);
	merge_sort(nums,m+1,h,revPCnt);
	merge(nums, l, m,h,revPCnt);
}
public:
    int reversePairs(vector<int>& nums) {
        int revCnt=0;
       merge_sort(nums , 0 , nums.size()-1,revCnt);
       return revCnt;
    }
};