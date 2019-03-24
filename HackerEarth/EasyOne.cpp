// hackerearth
        #include <bits/stdc++.h>
             
        using namespace std;
         
        typedef long long ll; 
        const int N = 1e5+5;
        #define all(x) x.begin(),x.end()
        #define MOD 1000000007
        #define pii pair<int,int>
        #define pis pair<int,string>
        #define F first
        #define S second
        #define LCM(a,b) ((a*b)/__gcd(a,b))
        #define inf 1e15
        #define test ll cse;scanf("%lld",&cse);for(ll i=1;i<=cse;i++)
        #define PI 3.14159265

int minDistance(string word1, string word2) {
        int cnt=0;
        int l = word2.size();

        for(int i=0;i<l;i++){
            if(word1[i]!=word2[i]) cnt++;
        }
        return cnt;
}
int main(){
        
        int n;
        string s1, s2; int l;
        test{
            
            cin>> s1 >> s2 >> l;
            int ans=100000,ind; string s;
            int L = s1.size();
            for(int i=0;i< L-l+1;i++){
                string a = s1.substr(i,l);
                string b = s2.substr(i,l);

                int val = minDistance(a,b);

                if(val < ans){
                    ans = val;
                    ind = i;
                    s = a;
                }
                else if(val == ans && a<s){
                    ans = val;
                    ind = i;
                    s = a;
                }
            }
            cout<<s<<"\n";

        }
        return 0;
}