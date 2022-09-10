#include <iostream>

int digitsSum(int n){
    if(n == 0){
        return n;
    }
    return n % 10 + digitsSum(n / 10);
}

int main(){
    int n = 153;
    std:: cout << digitsSum(n);
}