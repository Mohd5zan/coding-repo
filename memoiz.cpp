#include<bits/stdc++.h>
using namespace std;
vector<vector<int>> dp(100,vector<int>(100,-1));
int ksmemoiz(int n,int m,vector<int> &wi,vector<int> &v){
    if(n==0 || m<=0) return 0;
    if(dp[n][m]!=-1) return dp[n][m];
    if(wi[n-1]<=m) return dp[n][m]=max(v[n-1]+ksmemoiz(n-1,m-wi[n-1],wi,v),ksmemoiz(n-1,m,wi,v));
    else return dp[n][m]=ksmemoiz(n-1,m,wi,v);
}
int main(){
    int n,m;
    cin>>n>>m;
    vector<int> wi(n),v(n);
    for(int i=0;i<n;i++)
    cin>>wi[i]>>v[i];
    cout<<ksmemoiz(n,m,wi,v);
}