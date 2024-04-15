class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
     
     int left=0;
     int right=nums.size()-1;
     if(target>nums[nums.size()-1]){
        return nums.size();
     }
     else if(target<nums[0]){
        return 0;
     }
    while(left<=right){
        int mid=(left+right)/2;
        if(target<nums[mid]){
            right=mid-1;
        }
        else if(target>nums[mid]){
            left=mid+1;
        }
        else if(target==nums[mid]){
            return mid;
        }
    }   
    return right+1;
    }
};