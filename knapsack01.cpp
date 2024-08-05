#include<bits/stdc++.h>
using namespace std;

int knapsack(int n,vector<int> &wt,vector<int> &v,int w){
    if(n==0 || w<=0)
    return 0;
    if(wt[n]-1<=w) return max(v[n-1]+knapsack(n-1,wt,v,w-wt[n-1]),knapsack(n-1,wt,v,w));
    else return knapsack(n-1,wt,v,w);
}
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n,w;
    cin>>n>>w;
    vector<int> wt(n),v(n);
    for(int i=0;i<n;i++){
        cin>>wt[i]>>v[i];
    }
    cout<<knapsack(n,wt,v,w);
}
