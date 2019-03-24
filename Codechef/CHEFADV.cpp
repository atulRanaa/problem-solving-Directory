#include <iostream>
#include <vector>
using namespace std;

#define N 1000005
#define ll long long


int main(){
    
    int t; cin>>t;
    int n,m,x,y,X,Y;
    while(t-- > 0){
        cin>>n>>m>>x>>y;
                
        bool f = false;
        if((n-1)%x ==0 && (m-1)%y==0) f=true;
        if((n-2) >= 0 && (m-2)>=0 && (n-2)%x ==0 && (m-2)%y==0) f=true;


        if(f) cout<<"Chefirnemo\n"; else cout<<"Pofik\n";
    }
    return 0;
}