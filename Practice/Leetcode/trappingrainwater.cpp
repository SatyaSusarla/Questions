class Solution {
public:
    int trap(vector<int>& height) {
        int n=size(height);
        int a[size(height)];
        int b[size(height)];
        stack<int> temp;
        temp.push(height[0]);
        a[0]=temp.top();
        for(int i=1;i<n;i++){
          if(height[i]>=temp.top()){
            a[i]=height[i];
            temp.push(height[i]);
          }
          else{
             a[i]=temp.top();
          }
        }
        reverse(height.begin(),height.end());
        stack<int> tem;
        tem.push(height[0]);
        b[0]=tem.top();
        for(int i=1;i<n;i++){
          if(height[i]>=tem.top()){
            b[i]=height[i];
            tem.push(height[i]);
          }
          else{
             b[i]=tem.top();
          }
        }
        reverse(height.begin(),height.end());
        reverse(b,b+n-1);
        int ans=0;
        for(int i=0;i<n;i++){
          ans+=min(a[i],b[i])-height[i];
        }
        return ans;
    }
};