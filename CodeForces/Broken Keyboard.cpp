#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        string a;
        cin>>a;
        long long int array[26]={0};
        for(int i=0;i<a.length();i++){
            if(a[i]==a[i+1] && i+1<a.length())
            i++;
            else
            array[(int)(a[i]-97)]++;
        }
        for(int i=0;i<26;i++){
            if(array[i]!=0)
           cout<<(char)(i+97);
            //if(array[i]%2!=0)
          //  cout<<(char)(i+97);     
       }
       cout<<"\n";
        a.clear();
    }
}