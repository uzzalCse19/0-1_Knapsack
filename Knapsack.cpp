#include <bits/stdc++.h>
using namespace std;
int Knapsack(int n,int weight[],int value[],int W)
{
    if(n<0 || W==0) return 0;
    if(weight[n]<=W)
    {
        int op1=Knapsack(n-1,weight,value,W-weight[n])+value[n];
        int op2=Knapsack(n-1,weight,value,W);
        return max(op1,op2);
    }
    else 
    {
          int op2=Knapsack(n-1,weight,value,W);
          return op2;
    }
}
int main()
{
    int n;
    cin>>n;
    int weight[n];
    int value[n];
    for(int i=0;i<n;i++) cin>>weight[i];
     for(int i=0;i<n;i++) cin>>value[i];
     int W;
     cin>>W;
     int ans=Knapsack(n-1,weight,value,W);
     cout<<ans<<endl;


}