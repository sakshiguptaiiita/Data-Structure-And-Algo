#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;
    string a[n+1],b[m+1];
    a[0]='/0';
    b[0]='/0';
    for(int i=1;i<=n;i++){
        cin>>a[i];
    }
    for(int i=1;i<=m;i++){
        cin>>b[i];
    }
    int t;
cin>>t;
    while(t--){
        int c;
        cin>>c;
        int d=c%n,f=c%m;
        if(c%n==0)
        d=n;
        if(c%m==0)
        f=m;
        cout<<a[d]+b[f]<<"\n";
    }
}