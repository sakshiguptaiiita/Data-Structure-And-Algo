#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++)
        cin>>a[i];
        
        bool okay=true;
        int l=-1;

        for(int i=0;i<n;i++){
             if(a[i]==1){
                 if(l==-1){
                     l=i;
                     continue;
                 }
                 if(i-l<6 && l!=i){
                     okay=false;
                     break;
                 }
                 l=i;
             }
        }
        if(okay==false)
        cout<<"NO\n";
        else
        cout<<"YES\n";
    }
    return 0;
}