#include <iostream>
using namespace std;

int main() {
int t;
cin>>t;
 while(t--){
     int a[5];
     int sum=0;
     for(int i=0;i<5;i++){
         cin>>a[i];
         sum+=a[i];
     }
     int p;
     cin>>p;
     sum=sum*p;
     if(sum<=120)
      cout<<"No\n";
     else
      cout<<"Yes\n";
 }
	return 0;
}
