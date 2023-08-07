#include<bits/stdc++.h>
using namespace std;
 
int main(){
    int x, reverse=0, temp, digit;
    cin>>x;
    temp=x;
    while(x>0){
              digit=x%10;
              reverse=reverse*10+digit;
              x=x/10;
    }
    if(reverse==temp){
        cout<<"true"<<endl;
    }
    else{
        cout<<"false"<<endl;
    }
}