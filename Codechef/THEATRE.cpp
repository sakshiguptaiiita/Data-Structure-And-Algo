#include<bits/stdc++.h>
 using namespace std;
#define ll long long int
 int main(){
  ll t,temp=0;
  cin>>t;
while(t--){
  ll n;
  cin>>n;
  ll a12[4]={0},a3[4]={0},a6[4]={0},a9[4]={0};
  while(n--){
    char c;
    cin>>c;
    ll time;
    cin>>time;
    if(time==12){
    if(c=='A')
    a12[0]++;
    if(c=='B')
    a12[1]++;
    if(c=='C')
    a12[2]++;
    if(c=='D')
    a12[3]++;
    }
    if(time==3){
    if(c=='A')
    a3[0]++;
    if(c=='B')
    a3[1]++;
    if(c=='C')
    a3[2]++;
    if(c=='D')
    a3[3]++;
   }
   if(time==6){
    if(c=='A')
    a6[0]++;
    if(c=='B')
    a6[1]++;
    if(c=='C')
    a6[2]++;
    if(c=='D')
    a6[3]++;
   }
   if(time==9){
    if(c=='A')
    a9[0]++;
    if(c=='B')
    a9[1]++;
    if(c=='C')
    a9[2]++;
    if(c=='D')
    a9[3]++;
   }
}
  ll max=INT_MIN,count=0;
   ll array[4]={0};
   int size = sizeof(array)/sizeof(array[0]);
//cout<<size<<"\n\n\n\n\n\n";
ll b[4]={25,50,75,100};
  for(int i=0;i<4;i++){
    for(int j=0;j<4;j++){
      if(j==i)
      continue;
      for(int k=0;k<4;k++){
        if(k==j || k==i)
        continue;
         for(int l=0;l<4;l++){
           if(l==k || l==j || l==i)
           continue;
           array[0]=a12[i];
           array[1]=a3[j];
           array[2]=a6[k];
           array[3]=a9[l];
       sort(array,array+size); 
         for(int m=0;m<size;m++){
             if(array[m]==0)
             count-=100;
             else
             count+=array[m]*b[m];
           } 
           if(max<count)
           max=count;
           count=0;
         }
      }
    }
  }
cout<<max<<"\n";
temp+=max;
max=0;
}
cout<<temp<<"\n";
return 0;
}
