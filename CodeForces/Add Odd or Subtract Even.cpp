#include<bits/stdc++.h>
using namespace std;
int main(){
  int t;
  cin>>t;
  while(t--){
  int a,b,c=0;
  cin>>a>>b;
  if(b>a)
   {
     if((b-a)%2==0)
     c=2;
     else
      c=1;
   }
  else if(b<a){
    if((a-b)%2==0)
    c=1;
    else
    c=2;
  }
  else
  c=0;
  cout<<c<<"\n";
  } 
  return 0;
}