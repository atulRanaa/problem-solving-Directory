#include<bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL); 

   	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);

	std::vector<float> v(300,0.0);
	float edgel = 0.0;

	for(int i=1;i <= 300;i++){
		v[i] = v[i-1] + 1.0/(i+1);
	}
	float num;
	while(1){
		cin>>num;

		if(num==0.00) break;
		cout<<distance(v.begin(),upper_bound(v.begin(),v.end(),num))<<" card(s)"<<endl;
	}
	return 0;
}