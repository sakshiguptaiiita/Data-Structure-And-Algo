#include<bits/stdc++.h>
using namespace std;
int main(){
  int t;
  cin>>t;
  while(t--){
    int n;
    cin>>n;
    string s;
    cin>>s;
    int x=0,y=0;
    if(s[0]=='L')x--;
    else if(s[0]=='R')x++;
    else if(s[0]=='U')y++;
    else if(s[0]=='D')y--;
    for(int i=1;i<n;i++){
      if(s[i]=='L' && (s[i-1]!='L' && s[i-1]!='R'))
      x--;
      else if(s[i]=='R' && (s[i-1]!='L' && s[i-1]!='R'))
      x++;
      else if(s[i]=='U' && (s[i-1]!='U' && s[i-1]!='D'))
      y++;
      else if(s[i]=='D'&& (s[i-1]!='U' && s[i-1]!='D'))
      y--;
    }
    cout<<x<<" "<<y<<"\n";
  }
  return 0;
}