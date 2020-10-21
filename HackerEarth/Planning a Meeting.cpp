#include <bits/stdc++.h>

using namespace std;

int isPossible(int n, vector<int> start, vector<int> end){
    vector< pair<int, int> > ar;
    for(int i = 0; i < n; i++) {
        ar.push_back({start[i], end[i]});
    }

    sort(ar.begin(), ar.end());
    int r = INT_MIN;
    int cnt = 0;
    for(int i = 0; i < n; i++) {
        if(r < ar[i].first) {
            cnt = 1;
            r = ar[i].second;
        }
        else
            cnt++;

        if(cnt > 2) return 0;
    }
    return 1;
}
int main(){
    int n;
    cin>>n;
    vector<int> start(n);
    for(int j = 0;j < n;j++){
        cin>>start[j];
    }
    vector<int> end(n);
    for(int j = 0;j < n;j++){
        cin>>end[j];
    }
    int result;
    result = isPossible(n,start,end);
    cout<<result;
    return 0;
}
