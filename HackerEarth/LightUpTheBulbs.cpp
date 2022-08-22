#include <iostream>
#include <vector>
#include <queue>
#include <functional>
#include <utility>

using namespace std;
const int MAX = 1e4 + 5;
typedef pair<long long, int> PII;
bool marked[MAX];
vector <PII> adj[MAX];

long long prim(int x)
{
    priority_queue<PII, vector<PII>, greater<PII> > Q;
    int y;
    long long minimumCost = 0;
    PII p;
    Q.push(make_pair(0, x));
    while(!Q.empty())
    {
        // Select the edge with minimum weight
        p = Q.top();
        Q.pop();
        x = p.second;
        // Checking for cycle
        if(marked[x] == true)
            continue;
        minimumCost += p.first;
        marked[x] = true;
        for(int i = 0;i < adj[x].size();++i)
        {
            y = adj[x][i].second;
            if(marked[y] == false)
                Q.push(adj[x][i]);
        }
    }
    return minimumCost;
}

int main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(nullptr); 

	int n;
	cin >> n;

	int x, y;
	vector< pair<int, int> > coordinates;
	for(int i = 0; i < n; i++) {
		cin >> x >> y;
		coordinates.push_back({x, y});
	}

    long long weight, minimumCost;
	for(int i = 0; i < n; i++) {
		for(int j = i+1; j < n; j++) {
			x = i;
			y = j;
			long long a = abs(coordinates[i].first - coordinates[j].first);
			long long b = abs(coordinates[i].second - coordinates[j].second);
			weight = a*a + b*b;
			adj[x].push_back(make_pair(weight, y));
        	adj[y].push_back(make_pair(weight, x));
		}
	}
    minimumCost = prim(0);
    cout << minimumCost << "\n";
    return 0;
}

