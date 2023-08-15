#include<bits/stdc++.h>
using namespace std;
 int factorial(int i){
    if(i>0){
        return i*factorial(i-1);
    }
    else{
        return 1;
    }
 }
int main(){
    int num;
    cin>>num;
    cout<<"the factorial of i is: "<<factorial(num);
}
