#include<iostream>
using namespace std;
int prime(int n){
    for(int i=2; i<=(n-1); i++){
        if(n%i==0){
            return 1;
        }
        else{
            return 0;
        }
    }
}

int main(){
    int n = 8;
    int r = prime(n);
    if(r==1){
        printf("%d is not a prime number.\n" , n);
    }else{
        printf("%d is a prime number.\n" , n);
    }
    return 0;
}