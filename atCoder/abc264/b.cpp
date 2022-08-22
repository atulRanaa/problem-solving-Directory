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

void rotateMatrix(vector< vector<char> > &mat){
   int N = mat.size();
   for (int i = 0; i < N; i++)
      reverse(mat[i].begin(), mat[i].end());
 
   for (int i = 0; i < N; i++) {
      for (int j = i; j < N; j++)
         swap(mat[i][j], mat[j][i]);
   }
}

int main() {
	fastIO;
	vector< vector<char> > matric(15, vector<char> (15, 'W'));

   for(int d = 0; d < 4; d++) {
      for(int i = 0; i < 7; i+=2) for(int j = i; j < 15 - i; j++) {
         matric[i][j] = 'B';
      }
      rotateMatrix(matric);
   }
   // print(matric);

   int i, j;
   cin >> i >> j;
   --i, --j;

   if(matric[i][j] == 'W')
      cout << "white\n";
   else 
      cout << "black\n";

   return 0;
}