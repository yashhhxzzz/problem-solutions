#include<bits/stdc++.h>
using namespace std;
 
int main(){
    int size, i;
    double n=0, x=0, y=0;
    cin>>size;
    int arr[size];
    for(int i=0; i<size; i++){
        cin>> arr[i];
    }
   for(i=0; i<=size; i++){
    if(arr[i]<0){
        n=n+1;
    }
     else if(arr[i]>0){

        x=x+1;
    }
    else if(arr[i]==0){

        y=y+1;
    }
   }
   double avg = n/i;
   double avg1 = x/i;
    double avg2= y/i;
        cout<<avg1<<endl;
        cout<<avg<<endl;
        cout<<avg2<<endl;
}