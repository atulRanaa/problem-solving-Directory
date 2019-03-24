#include<bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL); 

/*
sys.stdin=open('input.txt','r')
sys.stdout=open('output.txt','w')
*/
 	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	char s1[1234], s2[1234];
	
	while(cin>>s1){
		cin>>s2;

		int a1[26]={0}, a2[26]={0};
		int l1 = strlen(s1);
		int l2 = strlen(s2);
		string s;
		for(int i=0;i<l1;i++) a1[s1[i]-'a']++;
		for(int i=0;i<l2;i++) a2[s2[i]-'a']++;
		for(int i=0;i<26;i++){
			for(int j=0;j<min(a1[i],a2[i]);j++) s+=(char)(i+'a');
		}
		cout<<s<<endl;
	}

	return 0;
}