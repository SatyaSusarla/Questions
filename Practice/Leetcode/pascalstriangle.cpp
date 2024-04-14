class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> result;
        vector<int> one;
        vector<int> two;
        one.push_back(1);
        if(numRows>1){
        
        two.push_back(1);
        two.push_back(1);
        }
        else{
            result.push_back(one);
            return result;
        }
        result.push_back(one);
        result.push_back(two);
        for(int i=2;i<numRows;i++){
            vector<int> temp;
            temp.push_back(1);
            vector<int> work= result.back();
            for(int j=0; j<size(work)-1; j++){
                temp.push_back(work[j]+work[j+1]);
            }
             temp.push_back(1);
             result.push_back(temp);
        }
     return result;

    }
};