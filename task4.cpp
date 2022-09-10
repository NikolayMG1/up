#include <iostream>

bool contains(int n, int k){
    if(k == n % 10){
        return 1;
    }
    if(n == 0){
        return 0;
    }
    return contains(n / 10, k);
}
int main(){
    int n = 1022;
    int k = 1;
    std::cout << contains(n ,k);
}