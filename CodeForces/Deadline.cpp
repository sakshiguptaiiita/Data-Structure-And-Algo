#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
   int t;
   cin>>t;
   while(t--){
       double n,d,c=0;
       cin>>n>>d;
           for(int i=0;i<=n;i++){
               if((i+ceil(d/(i+1)))<=n)
               {cout<<"YES\n";
               c=1;
               break;}
           }
           if(c!=1)
            cout<<"NO\n";
       
   }
   return 0;
}