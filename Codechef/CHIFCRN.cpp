#include <iostream>
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
	        
	       if(a[0]==10 || a[0]==15){ 
	         cout<<"NO\n";
	         continue;
	       }
	     int c5=1,c10=0,c15=0;
	     bool p=true;
	    for(int i=1;i<n;i++){
	        if(a[i]==5){
	           c5++;
	          continue;
	        }
	        if(a[i]==10){
	           if(c5>0){
	            c5--;
	            c10++;
	            continue;
	           }
	           p=false;
	           break;
	        }
	        if(a[i]==15){
	            if(c10>=1 || c5>=2){
	                if(c10>=1)
	                 c10--;
	                else if(c5>=2)
	                 c5-=2;
	                 c15++;
	                continue;
	            }
	            p=false;
	            break;
	        }
	    }
	     if(p)
	         cout<<"YES\n";
	        else
	         cout<<"NO\n";
	}
	return 0;
}
