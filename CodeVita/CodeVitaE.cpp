#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
const ll N = 2e5 + 5;


int main() {


    ll ch, cc, ca;
    ll ah, ac, aa;
    ll mh, mah;
    ll mc, mac;
    ll ma, maa;
    ll total;

    cin >> ch >> cc >> ca;
    cin >> ah >> ac >> aa;
    cin >> mh >> mah;
    cin >> mc >> mac;
    cin >> ma >> maa;
    cin >> total;


    ll tmp;

    ll cost = 0;
    tmp = (mh * mah); total -= tmp; ah -= tmp; cost += (tmp * ch);
    tmp = (mc * mac); total -= tmp; ac -= tmp; cost += (tmp * cc);
    tmp = (ma * maa); total -= tmp; aa -= tmp; cost += (tmp * ca);

    // if(total < 0 || ah < 0 || ac < 0 || aa < 0) {
    //     cout << -1 << "\n";
    //     return 0;
    // }

    vector < tuple<ll, ll, ll> > remaining;

    remaining.push_back({ch, mah, ah});
    remaining.push_back({cc, mac, ac});
    remaining.push_back({ca, maa, aa});

    sort(remaining.begin(), remaining.end());


    for(int i = 0; i < (int)remaining.size(); i++) {
        auto A = remaining[i];
        if(total > 0) {
            ll availableArea = get<2>(A);
            ll areaBy1 = get<1>(A);
            ll noOfAnimal = availableArea / areaBy1;
            ll usingArea = min(total, noOfAnimal * areaBy1);

            cost += usingArea * get<0>(A); // price of area
            total -= usingArea;
        }
    }

    cout << cost << "\n";
    return 0;
}