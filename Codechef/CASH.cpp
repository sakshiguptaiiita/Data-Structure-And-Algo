#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){
ll t;
cin>>t;
while(t--){
  ll n,k;
  cin>>n>>k;
  ll a[n],x[n]={0},y[n]={0};
  cin>>a[0];
  x[0]=a[0]%k;
  if(a[0]%k==0)
  y[0]=0;
  else
  y[0]=k-(a[0]%k);  
  //cout<<y[0]<<" ";
  for(int i=1;i<n;i++){
    cin>>a[i];
    x[i]=x[i-1]+(a[i]%k);
    if(a[i]%k!=0)
  y[i]=y[i-1]+k-(a[i]%k);
  else
  y[i]=y[i-1];
  //  cout<<y[i]<<" ";
  }
 // cout<<"\n";
  ll d=0,min=INT_MAX;
  for(int i=0;i<n;i++){
    d=x[i]-y[n-1]+y[i];
    if(d<min && d>=0)
    min=d;
  //  cout<<y[i]<<" ";
  }
 //cout<<"\n";
  cout<<min<<"\n";

}
return 0;
}