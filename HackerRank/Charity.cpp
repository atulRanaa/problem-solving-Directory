#include <bits/stdc++.h>

using namespace std;

#define ll long long ll

int main()
{
    ll tc; cin >> tc;
    
    while(tc-- > 0) {  
        
        ll m, n, t; cin >> m >> n >> t;
        vector< pair<ll,ll> > group[m];
        
        ll charm;
        for(ll i=0;i<m;i++) {
            for(ll j=0;j<n;j++){ 
                cin>>charm;
                group[i].push_back({charm, 0});
            }
        }
        
        vector< vector<ll> > table;
        vector< pair<ll, pair<ll,ll> > > tableScore;
        
        ll guests, gener; 
        for(ll i=0;i<t;i++) {
            
            cin >> guests;
            ll score = 0;
            vector< ll > temp;
            for(ll j=0;j<guests;j++){ 
                cin>>gener;
                score += gener;
                temp.push_back(gener);
            }
            temp.push_back(score);
            table.push_back(temp);
            // tableScore.push_back({guests, {score, i}});
        }
        
        
        ll k; cin >> k;
        vector<ll> groupAsk;
        for(ll i=0;i<m;i++) groupAsk.push_back( n*k );
        for(ll i=0;i<m;i++) for(ll j=0;j<n;j++) group[i][j].second = k;
        for(ll i=0;i<m;i++) sort(group[i].begin(), group[i].end(), greater< pair<ll,ll> >());
        for(ll i=0;i<t;i++) sort(table[i].begin(),table[i].end(), greater<ll>());
        sort(table.begin(), table.end(), greater< vector<ll> >());

        vector< vector<ll> > a({ {12,13}, {13,14,15}, {15,15,14}, {1, 20}} );
        for(ll i=0;i<a.size();i++) sort(a[i].begin(),a[i].end(), greater<ll>());
        sort(a.begin(), a.end(), greater< vector<ll> >());
        for(auto info: a) {
            for(auto ele: info) cout << ele << " "; cout<< "\n";
        }

        /*
        1
        3 3 3
        1 2 3
        4 5 6
        7 8 9
        3 10 20 30
        3 40 50 60
        3 70 80 90
        3
        */
        for(auto info: group) {
            for(auto ele: info) cout <<ele.first<<":"<< ele.second<<" "; cout<< "\n";
        }
        for(auto info: table) {
            for(auto ele: info) cout << ele << " "; cout<< "\n";
        }
        

        ll totSum = 0;
        bool flag = true;
        for(auto info: table) {
            ll guests = info.size() - 1;

            // find best team
            ll score = 0, whichTeam = -1;
            for(ll i=0;i<m;i++) {
                ll canApproch = 0;
                if(groupAsk[i] >= (guests-1)){
                    // iterate over students
                    int j = 0;
                    int g = 0;
                    while(j < n && g < )
                }
            }
        }

    }
}