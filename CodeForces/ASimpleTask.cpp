// codeforces
#include <bits/stdc++.h>

#define forn(i, n) for (int i = 0; i < int(n); i++)

using namespace std;

vector<long long> res;

void brute(int pos, int cnt, long long cur){
    if (pos == 18){
        res.push_back(cur);
        return;
    }
    
    brute(pos + 1, cnt, cur * 10);
    
    if (cnt < 3)
        for (int i = 1; i <= 9; ++i)
            brute(pos + 1, cnt + 1, cur * 10 + i);
}

int main() {
    brute(0, 0, 0);
    res.push_back(1000000000000000000);
    
    int T;
    scanf("%d", &T);
    forn(i, T){
        long long L, R;
        scanf("%lld%lld", &L, &R);
        printf("%d\n", int(upper_bound(res.begin(), res.end(), R) - lower_bound(res.begin(), res.end(), L)));
    }
    cout<< res.size();
    return 0;
}