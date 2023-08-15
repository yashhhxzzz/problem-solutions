#include<bits/stdc++.h>
using namespace std;
 
int main(){
    int arr[5];
    int i;
    int target;
    cin>>target;
    for(i=0; i<5; i++){
        cin>>arr[i];
    
    if(arr[i]==target){
       cout<<(i+1)<<endl;
    }
}
}