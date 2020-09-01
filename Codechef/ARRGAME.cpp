// codechef
        #include <bits/stdc++.h>

        using namespace std;

        typedef long long ll;
        const ll N = 3e5+5;
        const ll MOD = 1000000007;
        #define all(x) x.begin(),x.end()
        #define pii pair<ll,ll>
        #define pis pair<ll,string>
        #define F first
        #define S second
        #define LCM(a,b) ((a*b)/__gcd(a,b))
        #define inf 1e15
        #define test ll cse;cin>>cse;for(ll _i=1;_i<=cse;_i++)
        #define PI 3.14159265
        #define MAX 10
        #define fast ios_base::sync_with_stdio(false);cin.tie(NULL);
        const double EPS = 1E-9;
        typedef vector<vector<double>> matrix;
        typedef vector<int> vi;


int main(){
    fast;

    test {
        int n;
        int ar[N];

        cin >> n;
        for(int i = 0; i < n; i++) cin >> ar[i];

        vector<int> gaps;
        int cnt = 0;
        for(int i = 0; i < n; i++) {

            if(ar[i] == 0)
                cnt++;
            else {
                if(cnt) gaps.push_back(cnt);
                cnt = 0;
            }
        }
        if(cnt) gaps.push_back(cnt);

        if(gaps.size() == 0)
            cout << "No\n";
        else {
            int ele = *max_element(gaps.begin(), gaps.end());
            int cnt = 0;

            for(int i = 0; i < gaps.size(); i++) {
                if(gaps[i] == ele) cnt++;
            }

            if((ele&1) && (cnt == 1))
                cout << "Yes\n";
            else
                cout << "No\n";
        }
    }
    return 0;
}
