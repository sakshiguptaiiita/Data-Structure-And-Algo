#include <bits/stdc++.h>
using namespace std;
bool areEqual(long long int arr1[],long long int arr2[],long long int n) 
{ sort(arr1,arr1+n); 
    sort(arr2,arr2+n); 
     for (int i = 0; i < n; i++) 
        if (arr1[i] != arr2[i]) 
            return false;
    return true; 
} 
void incre(long long int a[],long long int j,long long int k){
       while(j<=k){
	         a[j]++;
	         j++;
	                }
	  
}
int main() {
	int t;
	cin>>t;
	while(t--){
	    long long int n,i=0;
	    cin>>n;
	    long long int c[n],h[n],a[n];
	    while(i<n){
	        cin>>c[i];
	        i++;
	              }
	              long long int m = sizeof(c)/sizeof(c[0]);
	    i=0;
	    while(i<n){
	        a[i]=0;
	        cin>>h[i];
	        i++;
	              }
	    i=0;
	   while(i<n){
	    long long int j=i-c[i];
	     long long int k=i+c[i];
	     if(j<0)
	     j=0;
	     if(k>n-1)
	     k=n-1;
	  incre(a,j,k);
	     i++;
	            } 
	  if(areEqual(a,h,m))
	  cout<<"YES\n";
	  else
	 cout<<"NO\n";
	}
	return 0;
}
