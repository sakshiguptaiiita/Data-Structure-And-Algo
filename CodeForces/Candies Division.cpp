#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        if((n%k)==0){
            cout<<n<<"\n";
        }
        else{
            int bachitoffe=n-(floor(n/k)*k);
            if(bachitoffe<=floor(k/2)){
                cout<<n<<"\n";
            }
            else
            {
                int denihai=n-(bachitoffe-floor(k/2));
         cout<<denihai<<"\n";
                     }
        }
    }
}