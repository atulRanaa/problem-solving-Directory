#include <iostream>
using namespace std;

int main()
{
    int t;
    cin>>t;
    
    string s[7]={"MONDAY","TUESDAY","WEDNESDAY","THURSDAY","FRIDAY","SATURDAY","SUNDAY"};
    long int k;
    long int ar[7];
    while(t--){
        cin>>k;
        for(int i=0;i<7;i++) cin>>ar[i];
        
        long int sum=0;
        for(int i=0;i<7;i++) sum+=ar[i];
        sum = k%sum;
        int ans;
        if(sum==0){
            for(int i=6;i>=0;i--){
                if(ar[i] > 0) {ans=i;break;}
            }
        }
        else{
            int i;
            for(i=0;i<7;i++){
                k -= ar[i];
                if(k <= 0) break;
            }
            ans = i;
        }
        
        cout<<s[ans]<<"\n";
    }
    return 0;
}
