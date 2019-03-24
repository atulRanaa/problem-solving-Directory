#include<bits/stdc++.h>

using namespace std;
bool sortinrev(const pair<int,int> &a,const pair<int,int> &b)
{
       return (a.first > b.first)||(a.first == b.first && a.second > b.second);
}
int main(){
	int n,a,b;
	cin>>n;

	vector< pair<int,int> > v;
	int num = 1;
	for(int i=0;i<n;i++){
		cin>>a>>b;


		v.push_back({b,a});
	}
	sort(v.begin(),v.end(),sortinrev);
	long long int ans = 0;
	for(int i = 0;i < v.size() && num > 0;i++){
		num -= 1;
		num += v[i].first;

		ans += v[i].second;

	}
	cout<<ans;
	return 0;
}