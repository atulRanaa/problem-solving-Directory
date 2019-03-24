#include <bits/stdc++.h>

using namespace std;

#define ll long long int
#define mod 1000000007
int L = 0;
map< string, int> mapp;
//map< pair<int,string>, int> mapp; 
int dp[10005][700];
int solve(vector<string> ch, string c, int i){

    if(i == L) return 1;
    //if(mapp.find({i,c}) != mapp.end()) return mapp[{i,c}];
    int h = mapp[ c];
    
    if(dp[i][h] != -1) return dp[i][h];
    
    int ans = 0;
    if(ch[i] < c){
        ans = solve(ch,ch[i],i+1)+solve(ch,c,i+1);
    }
    else ans = solve(ch,c,i+1);
    
    ans %= mod;
    dp[i][h] = ans;
    //mapp[{i,c}] = ans;
    return ans;
}

void problem(vector<string> S){
    L = S.size();

    //mapp.clear();
    memset(dp, -1, sizeof(dp));
    string c = "zzz";
    cout<< solve(S, c, 0)<<"\n"; 
}

int main(){
    vector<string> S = {"zs", "al", "sn", "cb", "ah", "dh", "pp", "ab", "lz", "gt", "zy", "ti", "py", "mb", "zu", "sa", "pu", "nh", "hp", "kj", "yn", "tq", "ft", "rq", "tz", "ls", "xg", "co", "gq", "qf", "li", "ha", "cv", "jl", "mv", "un", "in", "dp", "hw", "fc", "wt", "wv", "za", "kg", "qc", "nd", "kv", "fo", "so", "be", "lx", "tu", "ly", "ju", "vr", "yt", "mu", "ol", "ua", "rm", "cf", "qo", "cv", "cu", "mf", "ax", "du", "ro", "sd", "kp", "wi", "ii", "ez", "ta", "zn", "mc", "uc", "qw", "yv", "sk", "as", "hd", "ob", "th", "gf", "ye", "ph", "mv", "gh"};//"ds","sdf","wqef","gd","dfh","pkjk","mbmn","qwdd","zczfd","xsc","ew","hdf","sdfsd","yrgdf","isarfds","ass","kjfgh","sdfwse","efw","ewef"};
    
    int c=1;
    for(int i=97;i <= 122; i++)
        for(int j=97; j <= 122; j++){
            string s = "";
            s += (char)(i);
            s += (char)(j);
            mapp[s] = c++;
        }
    mapp[ "zzz"] = 677;

    for(auto ele:mapp)
        cout<<ele.first<<" "<<ele.second<<"\n";
    problem(S);
    return 0;
}