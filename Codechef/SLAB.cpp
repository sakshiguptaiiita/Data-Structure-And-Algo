



#include<bits/stdc++.h>
using namespace std;
int main(){
int t;
cin>>t;
while(t--){
  long long int n;
  cin>>n;
  long long int count=0;
  if(n<=250000)
  count=0;
  if(n>250000 && n<=500000)
  count+=((n-250000)*0.05);
  if(n>500000 && n<=750000)
  count+=((500000-250000)*(0.05) +(n-500000)*(0.10));
  if(n>750000 && n<=1000000)
  count+=(12500+25000+(n-750000)*(0.15));
  if(n>1000000 && n<=1250000)
  count+=(12500+25000+ 37500+(n-1000000)*(0.2));
  if(n>1250000 && n<=1500000)
  count+=(12500+25000+37500+50000+(n-1250000)*(0.25));
  if(n>1500000)
  count+=(12500+25000+37500+50000+62500+(n-1500000)*(0.3));
  cout<<n-count<<"\n";
}
return 0;
}
