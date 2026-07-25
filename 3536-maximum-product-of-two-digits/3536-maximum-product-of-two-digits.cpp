class Solution {
public:
    int maxProduct(int n) {
       vector<int>arr;
       int t=n;
        while(t>0){
            arr.push_back(t%10);
            t=t/10;
        }
        reverse(arr.begin(),arr.end());
        for(int i=0;i<arr.size();i++){
            cout<<arr[i]<<" ";
        }
        int ans=0;
        for(int i=0;i<arr.size();i++){
            for(int j=0;j<arr.size();j++){
                if(i!=j) ans=max(arr[i]*arr[j],ans);
            }
        }
        return ans;
    }
};