#include<bits/stdc++.h>

using namespace std;
int main(){
	int cal[4]={0};
    for(int i=0;i<4;i++) cin>>cal[i];
    string s;
    cin>>s;
    int l = s.length();
    long long int calSUM=0;
    for(int i=0;i<l;i++){
        calSUM += cal[s[i]-'1'];
    }

    cout<<calSUM;
	return 0;
}