#include <iostream>
#include<stdio.h>
using namespace std;
 
int isSafe(int **board, int row, int col,int N)
{
    int i, j;
 
  
    for (i = 0; i < col; i++)
        if (board[row][i]==1) return -1;
 
   
    for (i=row, j=col; i>=0 && j>=0; i--, j--)
        if (board[i][j] ==1) return -1;
 
    
    for (i=row, j=col; j>=0 && i<N; i++, j--)
        if (board[i][j])
            return -1;
 
    return 1;
}
 

int solveNQUtil(int **board, int col,int N)
{
   
    if (col >= N)
        return 1;
 
  
    for (int i = 0; i < N; i++)
    {
      
        if ( isSafe(board, i, col,N) == 1)
        {
          
            board[i][col] = 1;
 
          
            if ( solveNQUtil(board, col + 1,N) ==1)
                return 1;
 
        
            board[i][col] = 0; 
        }
    }
 
     
    return -1;
}

int main()
{
  int n,i,j;
  cin>>n;
  int **array;
  array = new int *[n];
  for(int i = 0; i <n; i++) array[i] = new int[n];
  
  if(solveNQUtil(array,0,n) == 1){
          for(i=0;i<n;i++){
                 for(j=0;j<n;j++){
                  cout<<" "<<array[i][j];
                 }
              cout<<endl;
           }
      }
  else cout<<"Not possible";
return 0;
}


