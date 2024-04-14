class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int,int> hash;
        for(int k=0;k<size(nums);k++){
            hash[nums[k]]=k;
        }
        vector<int> result;
        for(int i=0;i<size(nums);i++){
            int x=nums[i];
            int tar=target-x;
          /*  for(int j=i+1;j<size(nums);j++){
                if(nums[j]==tar){
                    result.push_back(i);
                    result.push_back(j);
                    return result;
                } */

            if(hash.count(tar) && hash.find(tar)->second!=i){
                 result.push_back(i);
                    result.push_back(hash.find(tar)->second);
                    return result;
            }
            }
        
        return result;

    }
};