#include<bits/stdc++.h>
using namespace std;
 
int main(){
    int arr[5];
    int target, mid;
    for(int i=0; i<5; i++){
        cin>>arr[i];
        cin>>target;
        mid= 4/2;
    if(target==arr[mid]){
        cout<<"the position of the element"<<mid;
    }
    if(target<arr[mid]){
        for(int j=mid; j<5;j++){
            if(arr[j]==target){
                cout<<(j+1);
            }
    if(target>arr[mid]){
        for(int j=mid; j>5;j--){
            if(arr[j]==target){
                cout<<(j+1);
            }
        }
    }
    }

}
    }
}