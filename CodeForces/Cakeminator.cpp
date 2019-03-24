#include<bits/stdc++.h>

using namespace std;
int main(){
	int r,c;
	cin>>r>>c;

	char cake[r][c];
	for(int i=0;i<r;i++){
		for(int j=0;j<c;j++) cin>>cake[i][j];
	}
    for(int i=0;i<r;i++){
		bool f=true;
		for(int j=0;j<c;j++){
				if(cake[i][j]=='S'){f=false;break;}
		}
		if(f){
			for(int j=0;j<c;j++) cake[i][j]='e';
		}
	}
	for(int i=0;i<c;i++){
		bool f=true;
		for(int j=0;j<r;j++){
				if(cake[j][i]=='S'){f=false;break;}
		}
		if(f){
			for(int j=0;j<r;j++) cake[j][i]='e';
		}
	}
	int count=0;
	for(int i=0;i<r;i++){
		for(int j=0;j<c;j++){
			if(cake[i][j]=='e') count++;
		}
		//for(int j=0;j<c;j++) cout<<cake[i][j];
		//cout<<endl;
	}
	cout<<count;
	return 0;
}