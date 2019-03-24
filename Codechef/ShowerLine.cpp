#include<bits/stdc++.h>
using namespace std;


std::vector< std::vector<char> > v;
void swap(char *x, char *y)
{
    char temp;
    temp = *x;
    *x = *y;
    *y = temp;
}
void permute(char *a, int l, int r)
{
   int i;
   if (l == r){
    std::vector<char> temp;
    temp.push_back(*a);
    temp.push_back(*(a+1));
    temp.push_back(*(a+2));
    temp.push_back(*(a+3));
    temp.push_back(*(a+4));
    v.push_back(temp);
   }
   else
   {
       for (i = l; i <= r; i++)
       {
          swap((a+l), (a+i));
          permute(a, l+1, r);
          swap((a+l), (a+i));
       }
   }
}
int main(){
  char str[]="01234";
  permute(str,0,4);

  int ar[5][5];
  for(int i=0;i<5;i++){
    for(int j=0;j<5;j++) cin>>ar[i][j];
  }
  long long ans = 0;
  for(int i=0;i<v.size();i++){

    long long temp = 0 ;
    temp += ar[v[i][0]-'0'][v[i][1]-'0']+ar[v[i][1]-'0'][v[i][0]-'0'];
    temp += ar[v[i][2]-'0'][v[i][3]-'0']+ar[v[i][3]-'0'][v[i][2]-'0'];
    temp += ar[v[i][1]-'0'][v[i][2]-'0']+ar[v[i][2]-'0'][v[i][1]-'0'];
    temp += ar[v[i][3]-'0'][v[i][4]-'0']+ar[v[i][4]-'0'][v[i][3]-'0'];
    temp += ar[v[i][2]-'0'][v[i][3]-'0']+ar[v[i][3]-'0'][v[i][2]-'0'];
    temp += ar[v[i][3]-'0'][v[i][4]-'0']+ar[v[i][4]-'0'][v[i][3]-'0'];

    if(temp > ans) ans = temp;
  }

  cout<<ans;
  return 0;
}