#include<bits/stdc++.h>
using namespace std;
int main(){
   int n,ac=0,count=0,bc=0;
   cin>>n;
   string a;char s;
   cin>>a;
   for(int i=0;i<n;i++){
       if(i%2==0)
       s=a[i];
      else
      {if((int)a[i]==(int)s)
     { count++;
      if(a[i]=='a')
      a[i]='b';
      else
      a[i]='a';
      }}
   }
   cout<<count<<"\n"<<a;
}