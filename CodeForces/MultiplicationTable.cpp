#include<bits/stdc++.h>
using namespace std;

int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);

 long int n,x;
 cin>>n>>x;
std::vector< pair<long int ,long int> > v;

long int limit=sqrt(x)+1;
int step = x&1?2:1; 

 long int i;
 for(i=1;i < limit;i+=step){
     if(x%i == 0){
     	v.push_back(make_pair(i,x/i));
     }
 }
long int count=0;
 for(i=0; i < v.size() ; i++){
     if(v[i].first <=n && v[i].second <=n) count+=2; 
 }
 if(count!=0 && sqrt(x)*sqrt(x) == x) count--;
 cout<<count;
 return 0;
}