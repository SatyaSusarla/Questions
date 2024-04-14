class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& x) {
          vector<vector<int>> intervals=x;
       sort(intervals.begin(), intervals.end()); 
        vector<vector<int>> final;
        vector<int> temp=intervals[0];
        if(intervals.size()==1){
            final.push_back(intervals[0]);
        }
        for(int i=1;i<intervals.size();i++){
            vector<int> result;
            vector<int> temf=intervals[i];
          if(temp[1]>=temf[0] && temp[1]<=temf[1]){
             result.push_back(temp[0]);
             result.push_back(temf[1]);
             temp=result;
             if(i==intervals.size()-1){
                final.push_back(temp);
            }
          }
          else if(temp[1]>=temf[0] && temp[1]>temf[1]){
             result.push_back(temp[0]);
             result.push_back(temp[1]);
             temp=result;
             if(i==intervals.size()-1){
                final.push_back(temp);
            }
          }
          else{
           final.push_back(temp);
            temp=intervals[i];
            if(i==intervals.size()-1){
                final.push_back(intervals[i]);
            }
          }
        }
/*         final.push_back(temp);

    sort(final.begin(), final.end()); 
  
    auto it 
        = unique(final.begin(), final.end()); 
 
    final.erase(it, final.end()); 
*/
        return final;
    }
};