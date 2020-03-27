#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll N = 1e5 + 5;
const ll MOD = 1e9 + 7;
#define all(x) x.begin(),x.end()
#define pii pair<int,int>
#define pis pair<ll,string>
#define F first
#define S second
#define LCM(a,b) ((a*b)/__gcd(a,b))
#define inf 1e15
#define test ll cse;cin>>cse;for(ll _i=1;_i<=cse;_i++)
#define PI 3.14159265
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
const double EPS = 1E-9;
typedef vector< vector<double> > matrix;
typedef vector<int> vi;

int prime[N];

int binaryExponentiation(ll N, ll X) {
    ll result = 1LL, n = N, x = X;
    while (n > 0) {
        if (n & 1) result = (result * x) % MOD;
        x = (x * x) % MOD;
        n >>= 1;
    }
    return (int)result;
}
int prodOfFact(int n, int numberOfDiv) {
    ll prod = binaryExponentiation(numberOfDiv / 2, n);
    ll sqrtN = (int)sqrt(n);
    if (numberOfDiv & 1) {
        prod = ((ll)prod * (ll)sqrtN) % MOD;
    }
    return prod;
}

int numofFact(int num) {
    int res = 1, n = num;
    map<int, int> mapp;
    while (num > 1) {
        mapp[ prime[num]]++;
        num /= prime[num];
    }
    // for(pii e: mapp) for(int i=0;i<e.S;i++) cout<<" x " << e.F; cout << "\n";
    int numberOfDiv = 1;
    for (pii e : mapp) numberOfDiv *= (e.S + 1);
    return numberOfDiv;
}
void sieve() {
    memset(prime, 0, sizeof(prime));
    prime[0] = prime[1] = 1;

    for (int i = 2; i < N; i++) {
        if (prime[i] == 0) {
            for (int j = i; j < N; j += i) prime[j] = i;
        }
    }
}

vector<ll> findOccurenceNGE(vector<int> ar, int n) {
    ll f[n + 5], g[n + 5];

    stack < int > stk;
    reverse(ar.begin(), ar.end());
    ar.push_back(0);
    reverse(ar.begin(), ar.end());

    // Next greatest to the right
    for (int i = 1; i <= n ; i++) {
        while (! stk.empty() && ar[i] > ar[ stk.top() ]) {  // greater then
            f[ stk.top()] = i; stk.pop();
        }
        stk.push(i);
    }
    while (! stk.empty()) { f[ stk.top()] = n + 1; stk.pop();}

    // Next greatest to the left
    for (int i = n; i >= 1 ; i--) {
        while (! stk.empty() && ar[i] >= ar[ stk.top() ]) { // less then equal to
            g[ stk.top()] = i; stk.pop();
        }
        stk.push(i);
    }
    while (! stk.empty()) { g[ stk.top()] = 0; stk.pop();}

    // for(int i=1;i<=n;i++) cout << g[i] << " "; cout<<"\n"; // ((g[i]!=-1)? ar[g[i]]: g[i])
    // for(int i=1;i<=n;i++) cout << f[i] << " "; cout<<"\n"; // ((f[i]!=-1)? ar[f[i]]: f[i])
    vector< ll > ans;
    for (int i = 1; i <= n; i++) ans.push_back( (f[i] - i) * (i - g[i]) );
    // int tot = 0;
    // for(int i=0;i<n;i++) {tot += ans[i]; cout << ans[i] << " ";} cout << tot << "\n";
    return ans;
}
vector<int> solve(vector<int> &A, vector<int> &B) {
    sieve();

    // vector<int> t({9, 25, 10, 100, 121});
    // for(const int &i: t) cout << prodOfFact(i, numofFact(i)) << "\n";

    int n = A.size();
    vector< ll > index = findOccurenceNGE(A, n);
    vector< pair<int, ll> > sortBy;

    for (int i = 0; i < n; i++) {
        int pod = prodOfFact( A[i], numofFact(A[i]) );
        sortBy.push_back( {pod, index[i]} );
    }
    sort(sortBy.begin(), sortBy.end(), greater< pair<int, int> >());

    index[0] = sortBy[0].second;
    for (int i = 1; i < n; i++) index[i] = index[i - 1] + sortBy[i].second;

    vector<int> ans;
    // for(auto range: sortBy) cout << range.first << ":" << range.S << " "; cout << "\n";
    // for(const ll &range: index) cout << range << " "; cout << "\n";

    for (const int &ind : B) {
        int pos = distance(index.begin(), lower_bound(index.begin(), index.end(), ind));
        // cout << pos << " " << sortBy[pos].first << "\n";
        ans.push_back( sortBy[pos].first );
    }
    return ans;
}

int main() {
    vector<int> A(
    {   461, 348, 28, 566, 978, 689, 914, 892, 435, 81, 599, 879, 453, 125, 741, 168, 50, 383, 999, 402, 416, 204, 350, 814, 811, 537,
        703, 734, 45, 657, 133, 285, 747, 18, 989, 393, 737, 911, 436, 104, 180, 326, 195, 553, 350, 579, 280, 238, 817, 326, 32, 530,
        187, 175, 707, 772, 498, 197, 581, 398, 488, 7, 910, 297, 813, 839, 309, 965, 610, 62, 436, 137, 818, 957, 327, 53, 834, 788,
        616, 351, 859, 577, 116, 740, 557, 229, 740, 311, 74, 181, 435, 288, 959, 249, 191, 711, 166, 566, 331, 22, 566, 410, 688, 294,
        163, 703, 891, 609, 391, 264, 611, 156, 761, 422, 827, 897, 774, 251, 89, 513, 429, 260, 24, 559, 519, 314, 587, 494, 83, 433,
        938, 914, 151, 983, 606, 485, 445, 685, 698, 670, 431, 968, 518, 17, 40, 198, 413, 304, 375, 917, 50, 691, 20, 975, 879, 964,
        329, 767, 778, 317, 249, 679, 17, 502, 396, 256, 389, 753, 252, 466, 784, 734, 335, 623, 741, 500, 589, 736, 496, 189, 784,
        541, 911, 454, 981, 35, 664, 577, 615, 511, 959, 748, 538, 571, 354, 566, 880, 721, 125, 698, 312, 808, 871, 767, 402, 739,
        444, 572, 441, 93, 926, 91, 442, 65, 976, 42, 769, 739, 489, 445, 847, 257, 386, 568, 115, 670, 46, 463, 761, 12, 422, 811, 843,
        627, 273, 689, 807, 177, 157, 485, 258, 611, 604, 720, 774, 482, 347, 989, 809, 410, 878, 676, 684, 774, 379, 163, 827, 62, 614,
        412, 359, 442, 977, 452, 874, 468, 10, 716, 159, 997, 525, 690, 651, 369, 955, 414, 565, 734, 412, 222, 344, 663, 367, 780, 502,
        475, 881, 489, 347, 94, 764, 12, 853, 939, 708, 754, 685, 356, 482, 325, 16, 378, 764, 696, 699, 616, 72, 433, 289, 985, 353, 120,
        890, 874, 292, 36, 126, 636, 344, 625, 72, 88, 441, 262, 485, 282, 72, 808, 820, 897, 547, 258, 562, 426, 886, 737, 514, 136,
        413, 476, 813, 105, 75, 236, 956, 39, 854, 794, 907, 745, 580, 779, 863, 133, 570, 373, 151, 844, 204, 580, 267, 67, 543, 710,
        580, 923, 755, 682, 600, 455, 676, 184, 676, 313, 491, 270, 217, 54, 713, 194, 871, 389, 750, 505, 20, 85, 977, 990, 201, 326,
        57, 905, 578, 126, 190, 442, 904, 746, 55, 949, 846, 605, 694, 595, 200, 735, 7, 767, 190, 147, 78, 636, 180, 803, 435, 454,
        428, 180, 413, 753, 892, 867, 466, 420, 183, 580, 479, 473, 297, 327, 120, 470, 548, 839, 599, 760, 43, 177, 407, 605, 355,
        652, 174, 235, 570, 740, 801, 150, 451, 900, 405, 945, 743, 83, 559, 713, 314, 410, 505, 178, 965, 334, 807, 155, 193, 452,
        860, 569, 72, 314, 220, 161, 706, 869, 443, 459, 382, 50, 550, 911, 249, 485, 77, 829, 207, 683, 244, 75, 217, 543, 310, 502,
        340, 470, 292, 697, 771, 272, 235, 557, 607, 157, 535, 120, 808, 220, 972, 215, 205, 987, 70, 475, 47, 607, 343, 18, 751, 131,
        637, 15, 137, 492, 119, 364, 357, 732, 570, 137, 305, 786, 118, 521, 416, 145, 956, 91, 405, 190, 576, 875, 928, 226, 642, 594,
        249, 217, 944, 911, 223, 854, 917, 947, 860, 496, 624, 475, 778, 915, 311, 774, 863, 353, 919, 229, 222, 964, 270, 619, 497,
        532, 22, 275, 641, 556, 196, 55, 170, 44, 219, 46, 391, 508, 663, 890, 997, 306, 678, 299, 811, 307, 930, 970, 466, 602, 511,
        390, 468, 131, 659, 617, 547, 478, 975, 515, 265, 82, 759, 547, 528, 79, 83, 566, 463, 994, 249, 349, 22, 660, 918, 557, 577,
        646, 12, 802, 991, 640, 1, 470, 684, 885, 418, 777, 16, 233, 444, 708, 69, 184, 713, 930, 252, 810, 134, 341, 40, 186, 915, 967,
        550, 718, 86, 202, 411, 735, 978, 222, 873, 713, 821, 3, 497, 219, 222, 253, 917, 722, 109, 11, 910, 455, 654, 619, 455, 830, 611,
        101, 843, 615, 307, 298, 911, 770, 361, 757, 110, 284, 113, 659, 37, 671, 698, 504, 659, 330, 363, 172, 307, 777, 39, 796, 113, 312,
        158, 517, 751, 886, 291, 62, 148, 711, 623, 485, 407, 858, 53, 73, 672, 571, 769, 674, 630, 896, 940, 53, 561, 896, 659, 464, 256, 513,
        716, 250, 898, 35, 82, 733, 439, 999, 331, 106, 63, 889, 781, 121, 544, 679, 295, 392, 132, 263, 329, 378, 350, 232, 274, 786, 60, 900, 45, 806
    });
    vector<int> B({128054, 16291, 98699, 63307, 238352, 117104, 10295, 5659, 11610, 199825});
    vector<int> ans = solve(A, B);
    for (int i : ans) cout << i << " "; cout << "\n";
    return 0;
}