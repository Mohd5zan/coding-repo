#include<bits/stdc++.h>
using namespace std;
int fjump(int a[],int n)
{
    if(n==0)
    return 0;
    int left=fjump(a,n-1)+abs(a[n]-a[n-1]);
    cout<<"left is : "<<left<<'\n';
    int right=INT_MAX;
    if(n>1)
    right=fjump(a,n-2)+abs(a[n]-a[n-2]);
    cout<<"Right is : "<<right<<'\n';
    return min(left,right);
}
int main()
{
    int n;
    cin>>n;
    int a[10];
    for(int i=0;i<n;i++)
    cin>>a[i];

    cout<<fjump(a,n-1);
}