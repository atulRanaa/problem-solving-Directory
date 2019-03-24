#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); 

   	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);

	int mat[10][4]={
			{0,0,0,0},
			{1,1,1,1},
			{2,4,8,6},
			{3,9,7,1},
			{4,6,4,6},
			{5,5,5,5},
			{6,6,6,6},
			{7,9,3,1},
			{8,4,2,6},
			{9,1,9,1}};
	long long int a,b; 
	int t; cin>>t;
	while(t--){
		cin>>a>>b;
		//cout<<(a%10)<<" "<<(b-1)%4<<endl;
		if(b==0) cout<<1<<endl;
		else cout<<mat[a%10][(b-1)%4]<<endl;
	}
	return 0;
}
