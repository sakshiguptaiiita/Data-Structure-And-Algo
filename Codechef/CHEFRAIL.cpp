#include <bits/stdc++.h>
using namespace std;
int fun(double x[],double y[],long long int count,size_t n,size_t m){
    for(int i=0;i<n;i++){
        if(x[i]>0)
        break;
        for(int j=0;j<m;j++){
            if(binary_search(x,x+n,((y[j]*y[j])/abs(x[i]))))
            count++;
        }
    }
     for(int i=0;i<m;i++){
        if(y[i]>0)
        break;
        for(int j=0;j<n;j++){
            if(binary_search(y,y+m,((x[j]*x[j])/abs(y[i]))))
          count++;
        }
    }
    return count;
}
int main() {
     ios_base::sync_with_stdio(false); cin.tie(NULL);
int t;
cin>>t;
while(t--){
    int n,m;
    cin>>n>>m;
    double x[n],y[m];
    long long int count=0;
    int j=0,k=0;
    for(int i=0;i<n;i++)
    {cin>>x[i];
    if(x[i]==0)
    {i--;
    n--;    
    j++;
    }
    } 
    sort(x,x+n);
    for(int i=0;i<m;i++)
    {cin>>y[i];
    if(y[i]==0){
        i--;m--;
        k++;
    }}
    if(j==1 || k==1)
    count+=(n*m);
    sort(y,y+m);
    cout<<fun(x,y,count,n,m)<<"\n";
}
	return 0;
}

