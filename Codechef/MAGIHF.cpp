#include <iostream>
#include <vector>
using namespace std;

#define N 1000005
#define ll long long


int main(){
    
    int t; cin>>t;
    int n,x,s;
    while(t-- > 0){
        cin>>n>>x>>s;

        int a,b;
        while(s-- > 0){
            cin>>a>>b;

            if(a==x) x=b;
            else if(b==x) x=a;
        }

        cout << x <<"\n";
    }
    return 0;
}