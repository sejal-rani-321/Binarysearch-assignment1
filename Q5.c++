// valid square 
 

 #include<iostream>
#include<cmath>
using namespace std;


bool validSq(int num){ 
    int i=0;
         int end=sqrt(num);
         while(i<=end){
             if(i*i==num){
                 return true;
             }
             else
             if(i*i<num)
             {
                 i++;

             }
             else
             end--;
         }
         return false;
}
        

int main(){
    long long n = 16;
    cout << validSq(n);
}