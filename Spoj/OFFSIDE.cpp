#include<bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL); 

   	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	int a,d;
	int b[20],c[20];
	while(1){	
		cin>>a>>d;

		if(a==0 && d==0) break;
		for(int i=0;i<a;i++) cin>>b[i];
		for(int i=0;i<d;i++) cin>>c[i];
		sort(b,b+a);
		sort(c,c+d);

		if(b[0] < c[1]) cout<<"Y"<<endl;
		else cout<<"N"<<endl;
	}
	
	return 0;
}