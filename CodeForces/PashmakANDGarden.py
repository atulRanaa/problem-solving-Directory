#include<bits/stdc++.h>
using namespace std;

int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
    int x1,y1,x2,y2,x3,y3,x4,y4;
    cin>>x1>>y1>>x2>>y2;

   if(x1==x2 && y1!=y2) printf("%d %d %d %d",x1+abs(y1-y2),y1,x2+abs(y1-y2),y2);  // || to y axis; 
   else if(x1!=x2 && y1==y2) printf("%d %d %d %d",x1,y1+abs(x1-x2),x2,y2+abs(x1-x2)); // || to x axis; 
   else if(x1-x2 == y1-y2) cout<<x1<<" "<<y2<<" "<<x2<<" "<<y1; //  diagonal points;
   else cout<<-1;  
return 0;
}
