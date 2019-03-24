// spoj
#include <bits/stdc++.h>
using namespace std;

const int N = 30000+5;
#define ll long long
#define MOD 1000000007
// ll ar[N];
// vector<int> tree[5*N];

// void build(int cur,int l,int r ){
//     if( l==r ){
//             tree[cur].push_back( ar[ l ] );
//             return ;
//     }
//     int mid = l+(r-l)/2;
//     build(2*cur, l , mid);          // Build left tree 
//     build(2*cur+1 , mid+1 , r);     // Build right tree
//     merge(tree[cur*2].begin(),tree[cur*2].end(),tree[cur*2+1].begin(),tree[cur*2+1].end(),back_inserter(tree[cur]));     //Merging the two sorted arrays
// }
// int query( int cur, int l, int r, int x, int y, ll k){
//         if( r < x || l > y ){
//                return 0; //out of range
//         }
//         if( x<=l && r<=y )
//         {
//               //Binary search over the current sorted vector to find elements smaller than K
//                 int i = (lower_bound(tree[cur].begin(),tree[cur].end(),k+1)-tree[cur].begin());
//                 return i;
//         }
//         int mid=l+(r-l)/2;
//         return (query(2*cur,l,mid,x,y,k) + query(2*cur+1,mid+1,r,x,y,k));
// }
 
struct node{
    int v;
    int i;
    int j;
    int q;
};
 
typedef node node;
 
int tree[30001];
node inp[230000];
int n;
int maxVal;
 
bool operator <( node a, node b ) {
    if ( a.v == b.v ) {
        return a.j > b.j;
    }
    return a.v > b.v;
} 
int read(int idx){
    int sum = 0;
    while(idx > 0){
        sum += tree[idx];    idx -= (idx & -idx);
    }
    return sum;
}
 
void update(int idx, int val){
    while(idx <= maxVal){
        tree[idx] += val;    idx += (idx & -idx);
    }
}
int main()
{
    int m;
    scanf("%d", &n);
    maxVal = n;
    for(int i = 0 ; i < n ; i++){
        scanf("%d", &inp[i].v);
        inp[i].i = i + 1;
        inp[i].j = -1;
        tree[i] = 0;
    }
    scanf("%d", &m);
    int res[m];
 
    for(int i = 0 ; i < m ; i++){
        scanf("%d %d %d", &inp[i + n].i , &inp[i + n].j, &inp[i + n].v);
        inp[i + n].q = i;
    }
 
    sort( inp, inp + n + m );
 
 
    for(int i = 0 ; i < n + m ; i++){
        if(inp[i].j == -1){
            update(inp[i].i, 1);
        }else{
            int result = read(inp[i].j) - read(inp[i].i - 1);
            res[inp[i].q] = result;
        }
    }
 
    for(int i = 0 ; i < m ; i++)
        printf("%d\n", res[i]);
    return 0;
}