    #include <bits/stdc++.h>
    using namespace std;

    
    
    #define MOD 1000000007
    #define pii pair<int,int>
    #define pis pair<int,string>
    #define F first
    #define S second
    #define LCM(a,b) ((a*b)/__gcd(a,b))
    #define inf 1e15
    #define ll long long
    const int N = 1e6+5;


int solve(int A, vector<int> &B) {
    int H[A+1];
    for(int i=0;i<=A;i++) H[i]=0;
    
    queue<int> q;
    for(int ele:B){
        H[ele] = 1;

        q.push(ele);
    }
    
    long long int ans = 1;
    while(!q.empty()){
        
        int it = q.size();
        cout<< it <<"\n";
        ans = (ans*it) % 1000000007;


        for(int i=0;i < it;i++){
            int u = q.front();
            q.pop();
            cout<<"sdfsd0 " <<u-1 << " "<<u+1<<"\n";
            if(u-1 >=1 && H[u-1]==0){
                cout<<"sdfsd1\n";
                H[u-1]=1;
                q.push(u-1);
            }
            if(u+1 <= A && H[u+1]==0){

                cout<<"sdfsd2\n";
                H[u+1]=1;
                q.push(u+1);
            }
        }
    }
    
    return ans;
}

int main(){
    int n; cin>>n;
    int m; cin>>m;
    vector<int> B(m);
    for(int i=0;i<m;i++) cin>>B[i];

    cout<< solve(n, B);
    return 0;
}