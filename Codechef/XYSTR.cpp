#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    string s;
	    cin>>s;
	    bool visited[s.length()];
	    memset(visited,false,sizeof(visited));
	    int count=0;
	    for(int i=0;i<s.length()-1;i++){
	        if(visited[i])
	         continue;
	        if((s[i]=='x' && s[i+1]=='y') || (s[i]=='y' && s[i+1]=='x')){
	            count++;
	            visited[i]=true;
	            visited[i+1]=true;
	        }
	    }
	    cout<<count<<"\n";
	}
	return 0;
}
