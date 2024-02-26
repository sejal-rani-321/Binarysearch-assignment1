
#include<iostream>
using namespace std;

int coin_level(int n){
    int s = 1 , e = n;
    int mid = s + (e - s)/2;
    while (s <= e){
        if(mid * ( mid + 1L) <= n* 2L){
            s = mid + 1;
        }
        else{e = mid - 1;}
    }
     return e ;
}

int main(){
    int n = 5;
    int ans =  coin_level(n);
    cout << " ans  "<< endl;
    cout <<" HAAA MILL GYA UTTR: "<< ans << endl;
}