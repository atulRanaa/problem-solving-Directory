#include<bits/stdc++.h>
using namespace std;

int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);

    long int s,n;
    cin>>s>>n;
     
    std::vector< pair<long int, long int > > v;
  
  long int x,y,i;
  for(i=0;i<n;i++){
  	cin>>x>>y;
  	v.push_back(make_pair(x,y));
  }
  sort(v.begin(),v.end());
  
  bool f=true;
  for(i=0;i<n;i++){
  	if(v[i].first >= s) {f=false; break;}
  	else s+=v[i].second; 
  }

  if(f) printf("YES");
  else printf("NO");
	return 0;
}