    #include <cstdio> 
    #include <cstring>
    #include <iostream>
    #include <algorithm> 
    using namespace std; 
    #define MAXN  1000005 
    #define MAXLG 17 
char A[MAXN]; 
struct entry { 
    int nr[2], p; 
} L[MAXN]; 
int P[MAXLG][MAXN], N, stp,i, cnt;
int SA[MAXN];

int cmp(struct entry a, struct entry b) { 
    return a.nr[0] == b.nr[0] ? (a.nr[1] < b.nr[1] ? 1 : 0) : (a.nr[0] < b.nr[0] ? 1 : 0); 
}
int pow2[22];
void power2(){
    pow2[0]=1;
    for(int i=1;i < 22;i++) pow2[i]=pow2[i-1]+pow2[i-1];
}
int lcp(int x, int y) { 
    int k, ret = 0; 
    if (x == y) return N - x; 
    for (k = stp - 1; k >= 0 && x < N && y < N; k --){
        if (P[k][x] == P[k][y]){
            x += pow2[k], y += pow2[k], ret += pow2[k]; 
        }
    }
    return ret; 
}
void build(){
    for (N = strlen(A), i = 0; i < N; i++) 
        P[0][i] = A[i] - 'a'; 
    for (stp = 1, cnt = 1; cnt >> 1 < N; stp ++, cnt <<= 1) 
    { 
        for (i = 0; i < N; i ++) 
        { 
            L[i].nr[0] = P[stp - 1][i]; 
            L[i].nr[1] = i + cnt < N ? P[stp - 1][i + cnt] : -1; 
            L[i].p = i; 
        } 
        sort(L, L + N, cmp); 
        for (i = 0; i < N; i ++) 
            P[stp][L[i].p] = i > 0 && L[i].nr[0] == L[i - 1].nr[0] && L[i].nr[1] == L[i - 1].nr[1] ?P[stp][L[i - 1].p] : i; 
    }
    for(i=0;i < N; i++)
        SA[ P[stp-1][i] ] = i;
}
int main(void) 
{ 
    power2();
    for(i = 0; i < 22; i++) cout<< pow2[i] << " "; cout<<"\n";

    int m,n, ans=0;
    cin >> m >> n;
    cin >> A; 
    cout<< m << n << A <<"\n";
        build();
    for(i = 0; i < n; i++) cout<< SA[i] << " "; cout<<"\n";

    for(i=0;i<=stp;i++){
        for(int j=0;j<n;j++) cout<<P[i][j]<<" "; cout<<"\n";
    }
    for(i = 0; i < (n-m); i++)
        ans = max( ans , lcp(SA[i], SA[i+m]) ), cout<< lcp(SA[i], SA[i+m]) <<"\n";

    cout << ans <<"\n";
    return 0;
}