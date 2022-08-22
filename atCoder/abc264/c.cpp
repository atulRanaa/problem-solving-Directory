#include<bits/stdc++.h>

using namespace std;


#define all(x) x.begin(),x.end()
#define fastIO ios::sync_with_stdio(false);cin.tie(0);cout.tie(0)
#define test int testcases;cin>>testcases;for(int tc=1;tc<=testcases;tc++)
typedef long long ll;

void print(string x)  { cout << '\"' << x << '\"'; }
void print(char x)  { cout << '\'' << x << '\''; }
void print(long long x)  { cout << x; }
void print(double x)  { cout << x; }
void print(bool x)  { cout << x; }
void print(int x)  { cout << x; }
 
template <class T, class V> void print(const pair<T, V> &x);
template <class T, class V> void print(const map<T, V>& mp);
template <class T, class... V> void print(T t, V... v);
template <class T> void print(const multiset<T>& pq);
template <class T> void print(const vector<T>& v);
template <class T> void print(const set<T>& pq);
 
template <class T, class V> void print(const pair<T, V>& x) {
   cout << "{"; print(x.first); cout << ", "; print(x.second); cout << "}";
}
template <class T, class V> void print(const map<T, V>& mp) {
   for (auto it = mp.begin(); it != mp.end(); ++it) { print(*it); cout << " "; }
}
template <class T> void print(const multiset<T>& pq) {
   vector<T> values(pq.begin(), pq.end()); print(values);
}
template <class T> void print(const vector<T>& v) {
   for (int i = 0; i < (int) v.size(); ++i) { print(v[i]); cout << (i + 1 < (int) v.size() ? " " : ""); }
}
template <class T> void print(const vector<vector<T>>& v) {
   for (int i = 0; i < (int) v.size(); ++i) { print(v[i]); cout << "\n"; }
}
template <class T> void print(const set<T>& pq) {
   vector<T> values(pq.begin(), pq.end()); print(values);
}
template <class T, class... V> void print(T t, V... v) {
   print(t); if(sizeof...(v)) cout << " | "; print(v...);
}

vector<int> sebsequence(vector<int> &a, vector<int> &b) {
   vector<int> idx;
   int i = 0, j = 0;
   while(i < a.size() && j < b.size()) {
      if(a[i] == b[j]) {
         idx.push_back(i);
         i++;
         j++;
      } else {
         i++;
      }
   }

   return idx;
}



int main() {
	fastIO;
   
   int a, b, p, q;
   cin >> a >> b;
   vector< vector<int> > A(a, vector<int>(b, 0));

   for(int i = 0; i < a; i++) for(int j = 0; j < b; j++) {
      cin >> A[i][j];
   }

   cin >> p >> q;
   vector< vector<int> > B(p, vector<int>(q, 0));
   for(int i = 0; i < p; i++) for(int j = 0; j < q; j++) {
      cin >> B[i][j];
   }

   int n = 1 << a;
   int m = 1 << b;

   for(int xmask = 1; xmask < n; xmask++) for(int ymask = 1; ymask < m; ymask++) {
      if(__builtin_popcount(xmask) == p && __builtin_popcount(ymask) == q) {
         bitset<10> x(xmask);
         bitset<10> y(ymask);
         vector< vector<int> > C(p, vector<int>(q, 0));

         int row = 0;
         for(int i = 0; i < a; i++) {

            int col = 0;
            for(int j = 0; j < b; j++) {
               if(x[i] == 1 && y[j] == 1) {
                  C[row][col] = A[i][j];
               }

               if(y[j]) col++;
            }

            if(x[i]) row++;
         }

         if(B == C) {
            cout << "Yes\n";
            return 0;
         }
      }
   }


   cout << "No\n";
   return 0;
}