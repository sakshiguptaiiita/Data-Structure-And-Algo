#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
        
      int n,s;
      cin>>n>>s;
      
      int player[n],price[n];
        for(int i=0;i<n;i++)
          cin>>player[i];
         
     int min1=INT_MAX,min2=INT_MAX;
     
       for(int i=0;i<n;i++){
           cin>>price[i];
           if(price[i]==0 && min1>player[i])
             min1=player[i];
           if(price[i]==1 && min2>player[i])
             min2=player[i];
       }
     if(min1==INT_MAX || min2==INT_MAX)
       cout<<"no\n";
     else if(min1+min2+s<=100)
       cout<<"yes\n";
     else
       cout<<"no\n";
        
    }
    
    return 0;
}