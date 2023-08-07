#include<bits/stdc++.h>
using namespace std;
 
int main(){
    int arr[]= {50,2,10,3,4};
     int sum=0;
    for(int i=0; i<5; i++){

        for(int j=0; j<5; j++){

           if(arr[i]<=arr[j]){

           sum=sum+arr[j];
           }


        }
    }
    cout<<sum<<endl;
    
}