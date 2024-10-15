class Solution {
public:
    int kthGrammar(int n, int k) {
        if(n==1 )
            return 0;
        //0                  
        //0 1 
        //0 1 1 0
        //0 1 1 0 1 0 0 1
        int mid=pow(2,n-1)/2;
        if(k<=mid)
            return kthGrammar(n-1,k);
        else
            return !kthGrammar(n-1,k-mid);
    }
};