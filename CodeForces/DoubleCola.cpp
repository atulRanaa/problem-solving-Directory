#include<bits/stdc++.h>
using namespace std;

int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
    long long int n;
    cin>>n;

  long long int t=n;
  long long int i=5,count=1;
  char str[5][50]={"Sheldon","Leonard","Penny","Rajesh","Howard"};
  
  while(1){
    if(t-i > 0){
        t-=i;
        count*=2;
        i*=2;
    }
    else break;
  }
  long long int ans=t/count -1;
  if(t%count) ans++;

    printf("%s",str[ans]);
	return 0;
}
