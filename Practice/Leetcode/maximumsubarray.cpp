class Solution {
public:
    int maxSubArray(vector<int>& arr) {
         int maxfar = arr[0];
        int maxend = 0;
        int n=size(arr);
        for(int i=0; i<n; i++) {
            maxend += arr[i];
            if(maxend > maxfar) {
                maxfar = maxend;
            }
            if(maxend < 0) {
                maxend = 0;
            }
        }
        return maxfar;
    }
};
// kadanes algoœ