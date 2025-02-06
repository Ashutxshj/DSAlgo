//Recursive
class Solution {
  public:
    int solve(int w, vector<int> &val, vector<int>&wt,int n)
    {
        if(w==0 || n==0) return 0;
        
        if(w>=wt[n-1])
            return max(val[n-1]+solve(w-wt[n-1],val,wt,n-1),solve(w,val,wt,n-1));
        
        else
            return solve(w,val,wt,n-1);
        
    }
    int knapSack(int capacity, vector<int> &val, vector<int> &wt)
    {
        int n = val.size();
        return solve(capacity,val,wt,n);
    }
};