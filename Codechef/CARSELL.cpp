#include<bits/stdc++.h>
using namespace std;
#define mod 1000000007
int main(){
  int t;
  cin>>t;
  while(t--){
      int n;
      cin>>n;
      int a[n];
      for(int i=0;i<n;i++)
      cin>>a[i];

      sort(a,a+n,greater<int>());
      int count=0;
      for(int i=0;i<n;i++){
       if(a[i]-i<=0)
         continue;
          count=((count%mod)+(a[i]-i)%mod)%mod;
      }
    cout<<count<<"\n";
  }  
  return 0;
}