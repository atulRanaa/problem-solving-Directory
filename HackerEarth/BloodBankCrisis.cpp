#include<bits/stdc++.h>
using namespace std;
vector< long int > v;

bool is_sortedr(long int);
int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
     long int n,i,temp;
     cin>>n;
     for(i=0;i<n;i++){
         cin>>temp;
         v.push_back(temp);
     }


     if(is_sorted(v.begin(),v.end())){
         for(i=n-1;i>=0;i--) cout<<v[i]<<endl;
     }
     else if(is_sortedr(n)){
         for(i=0;i<n;i++) cout<<v[i]<<endl;
     }
     else{
         queue< pair<long int ,long int > > q;
         q.push(make_pair(0,n));
         
         while(!q.empty()){

            long int count = q.size();
            long long int sum=0;
            while(count--){

                pair< long int ,long int > p=q.front();
                q.pop();
                int d = distance(v.begin(),max_element(v.begin()+p.first , v.begin()+p.second));
                sum +=v[d];
                if(d - p.first > 0) q.push(make_pair(p.first,d));
                if(p.second-d-1 > 0) q.push(make_pair(d+1,p.second));
            }    
            cout<<sum<<endl;
         }
     }
return 0;
}
bool is_sortedr(long int n){
    for(long int i=1;i<n;i++){
        if(v[i]>v[i-1]) return false;
    }
    return true;
}