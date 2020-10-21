#include <bits/stdc++.h>

using namespace std;

int minimunMoves(int N,int M, vector<vector<int>> &m){
    int ans = 0;
    for(int i = 0; i < N; i++) {
        int cnt = 0;
        for(int j = 0; j < M/2; j++){
            if(m[i][j] != m[i][M - 1 - j]) cnt ++;
        }
        // 0 1 0 0 1 0 1
        ans += (cnt / 2) + (cnt & 1);
    }

    return ans;

}

int main(){
    int N;
    cin>>N;
    int M;
    cin>>M;
    vector<vector<int>> Mat(N,vector<int>(M));
    for(int i = 0;i < N;i++){
        for(int j = 0;j < M;j++){
            cin>>Mat[i][j];
        }
    }
    int result;
    result = minimunMoves(N,M,Mat);
    cout<<result;
    return 0;
}
