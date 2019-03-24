#include<bits/stdc++.h>
using namespace std;

int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);

     int n,boys[110]={0};
     int temp,i;
     int m,girls[110]={0};

cin>>n;
     for(i=0;i<n;i++) {
     	cin>>temp;
     	boys[ temp ]+=1;
     }
cin>>m;
     for(i=0;i<m;i++) {
        cin>>temp;
        girls[ temp ]+=1;
     }
long int sum=0;
int small;
    for(i=1;i<=100;i++){
       if(boys[i] > 0) {
          small = min(boys[i],girls[i-1]);
          sum+=small;
          boys[i]-=small;
       }
       if(boys[i] > 0) {
          small = min(boys[i],girls[i]);
          sum+=small;
          boys[i]-=small;
          girls[i]-=small; 
       }
       if(boys[i] > 0){
       	  small = min(boys[i],girls[i+1]);
          sum+=small;
          girls[i+1]-=small;
       }
    }
cout<<sum;
return 0;
}
