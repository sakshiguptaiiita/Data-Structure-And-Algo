#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    int a[n],b[n];
	    long long int d=0;
	    long long int dis1=0,dis2=0;
	    for(int i=0;i<n;i++)
	        cin>>a[i];
	    for(int i=0;i<n;i++)
	     cin>>b[i];
	    for(int i=0;i<n;i++){
	        if(dis1==dis2 && a[i]==b[i])
	           d+=a[i];
	        dis1+=a[i];
	        dis2+=b[i];
	    }
	    cout<<d<<"\n";
	}
	return 0;
}
