// find the last occurrence of x

#include<iostream>
using namespace std;

last_Occ(int arr[], int n){
    int x = 3;
    int s = 0;
    int e = n-1;
    int mid = s + (e-s)/2;

    while (s <= e){
        if(arr[mid] == x){
            if(arr[mid+1] == x)
             s = mid+1;
             else{ cout << "lastOCC" << mid << endl;}
        }

        else if (arr[mid] < x)
        {
            s = mid + 1;
        }
        else if (arr[mid] > x)
        {
            e = mid - 1;
        }
        
    }
    
}

int main(){
    int arr[] = {1,2,3,3,3,3,4};
    int n  = sizeof(arr)/sizeof(arr[0]);

    last_Occ(arr,n);
}