#include<iostream>
#include<math.h>
#include<stdlib.h>
#include<stdio.h>
using namespace std;

#define inf 1e15
int main(){
	int t;	cin>>t;

	double vel[15], pos[15], car[15];
	int dir[15];
	while(t--){
		int n;
		double s,y; cin>>n>>s>>y;

		for(int i=0;i<n;i++) cin>>vel[i];
		for(int i=0;i<n;i++) cin>>dir[i];
		for(int i=0;i<n;i++) cin>>pos[i];
		for(int i=0;i<n;i++) cin>>car[i];

		double lane = y/s,travel = 0.0,temp;
		double arrival,depart; // hit by car for particular lane
		for(int i=0;i<n;i++){
			
				if(dir[i]==0){

					if(pos[i] < 0.0) arrival = -1;
					else arrival = (pos[i]-0.0)/vel[i];
					
					if(pos[i]+car[i] < 0.0) depart = -1;
					else depart = ((pos[i]+car[i])/vel[i]);

					if(arrival==-1 && depart==-1) travel += lane;
					else{
						temp = travel+lane;
						if((temp >= arrival && temp <= depart) || (travel >= arrival && travel <= depart)){
							travel = depart+lane;
						}
						else travel += lane;
					}
				}
				else{

					if(pos[i] > 0.0) arrival = -1;
					else arrival = (0.0-pos[i])/vel[i];
					
					if(pos[i]-car[i] > 0.0) depart = -1;
					else depart = (0.0-(pos[i]-car[i]))/vel[i];

					if(arrival==-1 && depart==-1) travel += lane;
					else{
						temp = travel+lane;
						if((temp >= arrival && temp <= depart) || (travel >= arrival && travel <= depart)){
							travel = depart+lane;
						}
						else travel += lane;
					}
				}
				//cout<<arrival<<" "<<depart<<" ";
		}
		printf("%0.7f\n",travel);
	}
	return 0;
}