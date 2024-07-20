class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int n = nums.size();

        int zeroCount = 0;
        int start = 0;
        int maxi = 0;

        for(int i=0;i<n;i++)
        {
            if(nums[i] == 0)
            {
                zeroCount++;
            }
            while(zeroCount > k)
            {
                if(nums[start] == 0)
                {
                    zeroCount--;
                }
                start++;
            }
            maxi = max(maxi,i-start+1);
        }

        return maxi;
    }
};