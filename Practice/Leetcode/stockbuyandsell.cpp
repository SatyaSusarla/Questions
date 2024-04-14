#include <bits/stdc++>

class Solution {
public:
    int maxProfit(vector<int>& a) {
        int profit=0;
        int buy=a[0];
for(int i=1;i<size(a);i++){
      if(a[i]<buy){
        buy=a[i];
        continue;
      }
      profit=max(profit,a[i]-buy);
}
return profit;

    }
};