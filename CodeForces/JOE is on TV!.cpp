#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
  ll t;
  cin>>t;
  long double s=0.0;
  for(double i=1;i<=t;i++){
      s=s+(1/i);
  }
  cout<<s;
   return 0;
}