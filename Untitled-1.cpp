#include<bits/stdc++.h>
using namespace std;
 
int main(){
    int arr[5]={5,2,4,1,4};
    int sum=0;
    for(int i=0;i<5;i++){
        for(int j=0; j<5;j++){
            if(arr[i]>arr[j]){

                sum=arr[j]+arr[i];
                }
                else(){
                    sum=arr[j]+arr[i];
                }
            }
        }
        cout<<sum<<endl;
    }

