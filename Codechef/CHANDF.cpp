#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    long long int x,y,l,r;
	    cin>>x>>y>>l>>r;
	   long long int z=0,maxi=0;
	   if(x==0 || y==0)
	    z=0;
	   else if(r>=2*max(x,y))
	    z=x|y;
	   else{
	   for(int i=0;i<=42;i++){
	       int temp=1<<i;
	       if((x&temp)|(y&temp)==temp){
	           z+=temp;
	       
	       if(z>=r+1){
	           z-=temp;
	           break;
	       }
	           if(maxi==((x&z)*(y&z)))
	            z-=temp;
	           else if(maxi<((x&z)*(y&z)))
	            maxi=(x&z)*(y&z);
	       }
	    }
	   }
	   cout<<z<<"\n";
	}
	return 0;
}
