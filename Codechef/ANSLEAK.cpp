#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int n,m,k;
	    cin>>n>>m>>k;
	   while(n--){
	       int a[m]={0};
	       int maxi=-1,index;
	       for(int i=0;i<k;i++){
	           int x;
	           cin>>x;
	           a[x-1]++;
	           if(maxi<a[x-1]){
	               maxi=a[x-1];
	               index=x;
	           }
	       }
	       cout<<index<<" ";
	   }
	}
	return 0;
}
