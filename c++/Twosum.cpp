#include<bits/stdc++.h>
using namespace std;
 
int main(){
   int target;
   int arr[5];
for(int i=0; i<5; i++){
    cin>>arr[i];
}
cin>>target;
   for(int i=0; i<5; i++){
    for(int j=0; j<5; j++){
        if(arr[i]+arr[j]==target){
            cout<<i<<","<<j<<endl;
            
    
    }
   }
}
return 0;
}
