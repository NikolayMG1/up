#include <iostream>

bool take(int* arr,int n, int size){
    if(size-1 == n){
        return true;
    }
    return arr[n] <= arr[n+1] && take(arr, n+1, size);
}
int main(){
    int k = 5;
    int arr[k] = {1, 2 , 1 ,4, 5};
    std::cout << take(arr, 0, k);
}