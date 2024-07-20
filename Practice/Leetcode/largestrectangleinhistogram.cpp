class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        int ans=0;
        stack<int>s;
        vector<int>left(heights.size());
        vector<int>right(heights.size());
        left[0]=1;
        s.push(0);
        for(int i=1;i<heights.size();i++)
        {
          while(!s.empty() &&  heights[s.top()]>=heights[i])
          {s.pop();}
          if(s.empty())
          {left[i]=i+1;}
          else
          {left[i]=i-s.top();}
          s.push(i);
        }
        while(!s.empty())
        s.pop();
        right[heights.size()-1]=1;
        s.push(heights.size()-1);
        for(int i=heights.size()-2;i>=0;i--)
        {
          while(!s.empty() &&  heights[s.top()]>=heights[i])
          {s.pop();}
          if(s.empty())
          {right[i]=heights.size()-i;}
          else
          {right[i]=s.top()-i;}
          s.push(i);
        }
    for(int i=0;i<heights.size();i++)
    {
        ans=max(ans,heights[i]*(left[i]+right[i]-1));
    }
    return ans;
    }
};