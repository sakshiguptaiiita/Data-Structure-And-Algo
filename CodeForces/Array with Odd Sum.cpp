#include<bits/stdc++.h>
using namespace std;
int main(){
int t;
cin>>t;
while(t--){
  int n,i=0,sum=0,odd=0,even=0;
  cin>>n;
  int a[n];
  while(i<n){
   cin>>a[i];
   if(a[i]%2!=0)
   odd++;
   else
   even++;
   sum+=a[i];
   i++;
  }
if(sum%2!=0)
cout<<"YES\n";
else{
  if(odd>0 && even>0)
  cout<<"YES\n";
  else
  cout<<"NO\n";
}
}
return 0;
}