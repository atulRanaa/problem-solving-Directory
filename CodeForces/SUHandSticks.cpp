#include<bits/stdc++.h>
using namespace std;

int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
      set < int > s;
      int ar[6];
      for (int i = 0; i < 6; ++i)
      {
      	cin>>ar[i];
      	s.insert( ar[i] );
      }
      if(s.size()==1) cout<<"Elephant";
      else if(s.size() > 3) cout<<"Alien";
      else{
      	int count[10]={0};
      	for (int i = 0; i < 6; ++i)
      	{
      		count[ ar[i] ] += 1;
      	}
      	bool f= false,f2=false;
      	for (int i = 0; i < 10; ++i)
      	{
      		if(count[i]==4) f=true;
      		if(count[i]==5) f2=true;
      	}
      	if(f && s.size()==2) cout<<"Elephant";
      	else if(f && s.size()==3) cout<<"Bear";
      	else if(f2 && s.size()==2) cout<<"Bear";
      	else cout<<"Alien";
      }
return 0;
}