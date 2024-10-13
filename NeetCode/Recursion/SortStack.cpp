void insertStack(stack<int>&s,int a){
    if(s.empty() || s.top()<a){
        s.push(a);
        return;
    }
    int temp=s.top();
    s.pop();
    insertStack(s,a);
    s.push(temp);
}
void SortedStack :: sort()
{
   //Your code here
   
   //Recursion Steps
   //Hypothesis
   //Base case
   //Induction
   
   if(s.empty()){
       return;
   }
   int temp=s.top();
   s.pop();
   sort();
   insertStack(s,temp);
}