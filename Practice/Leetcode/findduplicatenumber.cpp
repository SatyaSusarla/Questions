class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int x;
        for(int i=0;i<size(nums)-1;i++){
         x=nums[i];
         if(x==nums[i+1]){
            return x;
            break;
         }
         else
            continue;
        }
        return 0;
    }
};