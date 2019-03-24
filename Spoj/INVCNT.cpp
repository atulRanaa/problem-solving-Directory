#include<bits/stdc++.h>
using namespace std;

long long int inv=0;
void merge(long long int ar[],long long int l,long long int m,long long int r) 
{ 
    long long int i, j, k; 
    long long int size1 = m - l + 1; 
    long long int size2 =  r - m; 
    long long int left[size1],right[size2]; 
 
    
    for (i = 0; i <size1; i++) 
        left[i]=ar[l + i]; 
    for (j = 0; j <size2; j++) 
        right[j]=ar[m + 1+ j]; 
 
    
    i = 0; 
    j = 0; 
    k = l; 
    while (i<size1 && j<size2) 
    { 
        if (left[i]<=right[j]) ar[k++]=left[i++]; 
        else{
            ar[k++]=right[j++];
            inv += (size1-i);
        } 
    } 
 
   
    while (i < size1) 
      {ar[k++] = left[i++];} 
    while (j < size2) 
      {ar[k++] = right[j++];} 
        
} 

void mergeSort(long long int ar[],long long int p,long long int q){ 
  long long int mid; 
  if(p<q){ 
       mid=(p+(q-p)/2 ); 
   mergeSort(ar,p,mid); 
   mergeSort(ar,mid+1,q); 

   merge(ar,p,mid,q); 
  }
} 
long long int n;
long long int ar[200001];
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); 

    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    int t;cin>>t;
    
    while(t--){
        cin>>n;
        for(int i=0;i<n;i++) cin>>ar[i];
                
        mergeSort(ar,0,n-1);
        cout<<inv<<endl;
        inv = 0;
    }

	
	return 0;
}
