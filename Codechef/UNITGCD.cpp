#include <bits/stdc++.h> 
using namespace std;

int main()
{
    int t; cin>>t;
    while(t--)
    {
        int n,n1;
        cin>>n;
        if(n==1)
        {
            cout << n << "\n";
            cout << n <<" "<<n << "\n";
        }
        if(n==2)
        {
            cout << 1 <<"\n";
            cout << 1 <<" "<<"1 2" <<"\n";
        }
        if(n>=3){
        cout << n/2 << "\n";
        cout << "3 1 2 3" << "\n";
        if(n%2 == 0){
            for(int i=4;i<n;i+=2)
            cout <<"2 "<<i<<" "<<i+1<<"\n";
            cout << "1 "<<n<< "\n";
        }
        else{
            for(int i=4;i<n;i+=2)
            cout <<"2 "<<i<<" "<<i+1<<"\n";
        }
        }
        
    }
    return 0;
}