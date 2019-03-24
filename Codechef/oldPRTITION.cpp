#include<bits/stdc++.h>
using namespace std;

string fun(long long int n,long long int x){
    string s;
    long long int a=0,b=0;
    for(int i=n;i>0;i--){
        if(i!=x){
            if(a<=b){
                a += i;
                s += '0';
            }
            else{
                b += i;
                s += '1';
            }
        }
        else s+='2';
    }
    return s;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); 
 
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    int t; cin>>t;
    long long int x,n;
    for(int i=1;i<=t;i++){
        cin>>x>>n;
        //x = i;
        //n = t;
        long long int check = n*(n+1)/2 - x;
        if(check&1) cout<<"impossible"<<endl;
        else if(n <= 3) cout<<"impossible"<<endl;
        else{
            string s;
            s = fun(n,x);
            int len = s.size();
            if(x==1 && n%2==0 && n>=6){
                s.resize(len-6);
                s += "101002";
            }
            else if(x==2 && n >= 7 && (n-7)%4==0){
                s.resize(len-7);
                s += "1010021";
            }
 
                reverse(s.begin(),s.end());
                /*int l = s.size();
                long long int a=0,b=0;
                for(int i=0;i<l;i++){
                    if(s[i]=='0') a+=(i+1);
                    else if(s[i]=='1') b+=(i+1);
                }
                cout<<a<<" "<<b<<" ";*/
                cout<<s<<endl;
        }
    }
    return 0;
}  