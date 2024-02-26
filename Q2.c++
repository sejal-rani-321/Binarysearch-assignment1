// count numbers of 1s

#include<iostream>
using namespace std;

binary(int arr[], int n){

    // cout <<" hhghj";
    int x = 1;
    int s = 0;
    int e = n-1;
    int mid = s + (e-s)/2;
    int count = 0;
    while (s <= e){
        if(arr[mid] == x){
            return mid;
        }

        else if (arr[mid] < x)
        {
            s = mid + 1;
        }
        else if (arr[mid] > x)
        {
            e = mid - 1;
        }
      return -1;
    }
    
}


count(int arr[], int n){
    int element = binary( arr, n);
    if (element == 0) return 1;

    int count = 1;
    int e = element -1;
    while (e >= 0 && arr[e])
    {
        count++, e--;
    }
    int s = element +1;
     while (s < n && arr[s])
    {
        count++, s++;
        
    }
    return count;
}

// count(int arr[], int n){
//      int element = binary( arr, n);
//      if (element == 0) return 1;

//    int count = 0;
//    for (int i = 0; i < n; i++){
//     if(element == arr[i])
//     count++;
//    }
//    return count;
// }




int main(){
    int arr[] = {0,0,0,0,1,1};
    int n  = sizeof(arr)/sizeof(arr[0]);

   cout << count(arr,n);
}