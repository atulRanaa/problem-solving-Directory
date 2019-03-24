#include<bits/stdc++.h>
using namespace std;

int main(){
	
   	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	int t; cin>>t;
	while(t--){
		char str[100005];
		cin>>str;
		//cout<<str<<"\n";
		int l = strlen(str);
		
		vector<int> v[26];
		for(int i=0;i<l;i++){
			v[ str[i]-'a'].push_back(i+1);
		}
		int O=0;
		for(int i=0;i<26;i++){
			if(v[i].size()%2 == 1) O++;
		}
		//cout<<O<<"\n";
		if(O > 1) cout<<-1<<"\n";
		else{
			vector<int> s1,s2;
			int s3 = -1;
			for(int i=0;i<26;i++){
				if(v[i].size()%2 == 0){
					
					for(int j=1;j<v[i].size();j+=2){
						s1.push_back(v[i][j-1]);
						s2.push_back(v[i][j]);
					}
				}
				else s3= i;
			}
			for(int i=0;i < s1.size();i++) cout<<s1[i]<<" ";
			if(s3!=-1){
				for(int i=0;i < v[s3].size();i++) cout<<v[s3][i]<<" ";
			}
			for(int i=s2.size()-1;i >=0;i--) cout<<s2[i]<<" ";

			cout<<"\n";
		}
	}

	return 0;
}