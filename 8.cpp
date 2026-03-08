#include <iostream>
#include <cmath>
using namespace std;

bool isprime(int n){
    if(n <= 1) return false;
    for(int i = 2; i <= sqrt(n); i++){
        if(n % i == 0) return false;
    }
    return true;
}

void findprime(int l, int r){
    bool found = false;
    for(int i = l; i <= r; i++){
        if(isprime(i)){
            cout << i << " ";
            found = true;
        }
    }
    if(!found){
        cout << "No prime numbers found in the given range.";
    }
}

int main(){
    int l=10, r=30;
    findprime(l, r);
    return 0;
}