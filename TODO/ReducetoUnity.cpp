#include<bits/stdc++.h>

using namespace std;
#define ll long long
#define F first
#define S second


int prime[1000005];
vector<int> P;

void initPrime(){
    memset(prime,1,sizeof(prime));
    prime[0] = 0;
    prime[1] = 0;
    for(int i = 2; i*i <= 1000005; i++){
        if(prime[i]){
            P.push_back(i);
            for(int j=i+i; j <= 1000005;j+=i) prime[j] = 0;
        }
    }
}
int main()  {
    initPrime();

    int n; cin>>n;
    int minEvent[n+1];
    memset(minEvent,-1, sizeof(minEvent));
    minEvent[0] = 1;
    minEvent[1] = 1;

    for(int i=2;i<=n;i++){
        if(prime[i]) minEvent[i] = 1;
        else{
            if(prime[i-1]) minEvent[i] = 2;
            else if(prime[i+1]) minEvent[i] = 2; 
            else{

                int count = 0, j =i;
                for(auto p:P){
                    if(minEvent[j] != -1) break;
                    if(j%p == 0){
                        j /= p; count++;
                    }
                }
                minEvent[i] = min(minEvent[i-1]+1, minEvent[j]+count);
            }
        }
    }
    for(int i=0;i<=n;i++) cout<<i<<" "<<minEvent[i]<<"\n";
    return 0;
}
