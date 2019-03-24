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
  	int ar[1001]={0};
	ar[1] = 995;
	ar[2] = 996;
	ar[3] = 998;
	int i;
	for(i=1;i <= 997;i++){
		if(ar[i] == 0) {cout<<i<<endl;break;}
		ar[i+1] += ar[i]-1;
		ar[i] = 0;

		ar[i+2] += min(1000,ar[i+1])-1;
		ar[i+1] -= min(1000,ar[i+1]);
		
		ar[i+3] += min(1000,ar[i+2])-1;
		ar[i+2] -= min(1000,ar[i+2]);

		ar[i+3] -= 1;
		ar[i+2] -= 1;
		cout<<ar[i]<<" "<<ar[i+1]<<" "<<ar[i+2]<<" "<<ar[i+3]<<endl;
	}
	i++;
	ar[i]++;
	for(;i<= 999;i++){
		if(ar[i]==0){cout<<i<<endl;break;}
		ar[i+1] += ar[i]-1;
		ar[i] = 0;
		ar[i+2] += min(1000,ar[i+1])-1;
		ar[i+1] -= min(1000,ar[i+1]);

		ar[i+2] -= 1;

		cout<<ar[i]<<" "<<ar[i+1]<<" "<<ar[i+2]<<endl;
	}
	/*
	for(int i=990;i<= 1000;i++)
		cout<<ar[i]<<" ";*/
	return 0;
}