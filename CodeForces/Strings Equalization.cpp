#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        string a,b;
        cin>>a>>b;
        int c=0;
       for(int i=0;i<a.length();i++){
           size_t found=b.find(a[i]);
           if(found!=string::npos)
           {c=1;cout<<"YES\n";break;}
       }
       if(c==0)
       cout<<"NO\n";
    }
    return 0;
}