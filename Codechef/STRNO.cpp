#include <bits/stdc++.h>
using namespace std;
int divisor(int n,int k){
    vector<int> P; 
    int count=0;
    while (n%2 == 0) 
    {  count++;
        n /= 2; 
    } 
    for (int i=3; i*i<=n; i=i+2) 
    { 
        while (n%i == 0) 
        { 
            n = n/i; 
            count++;
        } 
    } 
    if (n >2)
    count++;
    if (count<k) 
        return 0; 
  return 1;
}
int main() {
	int t;
	cin>>t;
	while(t--){
	    int x,k;
	    cin>>x>>k;
	    if(divisor(x,k))
	    cout<<"1\n";
	    else
	    cout<<"0\n";
	}
	return 0;
}