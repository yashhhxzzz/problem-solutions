#include<bits/stdc++.h>
using namespace std;
 
int main()
{
   int i,n;
    cin>>n;
    for(i=1; i<=n; i++){
        if((i%3)==0 && (i%5)==0)
        printf("fizzBuzz\n");
        
        else if((i%3)==0 && (i%5)!=0)
                printf("Fizz\n");
            
        else if((i%5)==0 && (i%3)!=0)
                printf("Buzz\n");
            
        else
             printf("%d\n", i);
            }
         
        }
        

    
