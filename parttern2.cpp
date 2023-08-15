#include <iostream>
using namespace std;

int main() {
    int i;
    cin>>i;
    for(int j=0; j<=i; j++){
        cout<<"* "<<endl;
        for(int k=i; k<i-1; k-- ){
            cout<<"1";
        }
    }
}