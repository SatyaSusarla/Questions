class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {
        vector<int> dp(size(nums),1);
        for(int i=1;i<size(nums);i++){
            for(int j=0;j<i;j++){
                  if(nums[j]<nums[i] ){
                    dp[i]=max(dp[i],dp[j]+1);
                    
                  }
            }
            
        }
        for(int i=0;i<dp.size();i++){
            cout<<dp[i]<<" ";
        }
        int ilt=*max_element(dp.begin(),dp.end());
        return ilt;
    }
};