#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    
	    int a[n];
	    for(int i=0;i<n;i++)
	      cin>>a[i];
	   
	   int count=1;
	   vector<int>v;
       
	   for(int i=0;i<n;i++){
	     if(i<n-1 && abs(a[i]-a[i+1])<=2){
	         count++;
	         continue;
	     }
	     v.push_back(count);
	      count=1;
	   }
	   
	   cout<<*min_element(v.begin(),v.end())<<" "<<*max_element(v.begin(),v.end())<<"\n";
	   
	}
	return 0;
}
