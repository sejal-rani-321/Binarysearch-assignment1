// repeated element

#include<iostream>
using namespace std;

repeated_el(int arr[], int n){
    for (int i = 0; i <= n; i++){
    for (int k = i+1; k < n; k++){
        if(arr[i] == arr[k])
        return arr[i];
    }
    }
}
    


int main(){
    int arr[] = {1,2,3,3,4};
    int n = sizeof(arr)/sizeof(arr[0]);

   cout << repeated_el(arr, n);
}