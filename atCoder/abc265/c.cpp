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
template <class T> void print(const set<T>& pq) {
   vector<T> values(pq.begin(), pq.end()); print(values);
}
template <class T, class... V> void print(T t, V... v) {
   print(t); if(sizeof...(v)) cout << " | "; print(v...);
}

vector<string> grid;
bool visited[505][505];

int ansi = 0, ansj = 0;
int ans;

void dfs(int i, int j, int n, int m) {

	if(visited[i][j]) {
		ans = -1;
		return;
	}

	visited[i][j] = true;
	int x = i, y = j;
	if(grid[i][j] == 'U') x--;
	if(grid[i][j] == 'D') x++;
	if(grid[i][j] == 'L') y--;
	if(grid[i][j] == 'R') y++;

	if(x < 0 || x >= n || y < 0 || y >= m) {
		ansi = i+1;
		ansj = j+1;
		return;
	}
	dfs(x, y, n, m);
}

int main() {
	fastIO;
	
	int n, m;
	cin >> n >> m;

	grid.clear();
	memset(visited, false, sizeof visited);

	string tmp;
	for(int i = 0; i < n; i++) {
		cin >> tmp;
		grid.push_back(tmp);
	}

	dfs(0, 0, n, m);
	if(ans == -1)
		cout << ans << "\n";
	else
		cout << ansi << " " << ansj << "\n";

	return 0;
}