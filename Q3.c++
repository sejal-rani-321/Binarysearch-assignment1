// find the row with maximum number of 1's

#include<iostream>
using namespace std;

int max1_row(int arr[][4], int n , int m){
    
   int rowindx = -1;
   int maxcount = 0;
   for (int i = 0; i < n; i++){
    int count = 0;
      for (int j = 0; j < m; j++){
       if (arr[i][j] == 1){
         count++;
       }
       }
      if (count > maxcount){
        maxcount = count;
        rowindx = i;
      }
      
   }
    return rowindx;    
}


int main(){
    int mat[4][4] = {0,1,1,1,
                     0,0,1,1,
                     1,1,1,1,
                     0,0,0,0};
    // int n = sizeof(arr)/sizeof(arr[0]);
    for (int i = 0; i < 4; i++){
    for (int j = 0; j < 4; j++)
    {
        cout<<mat[i][j]<< " ";
    }
    cout << endl;
    }
    
   cout << "row: " << max1_row(mat,4,4) ;                
}