#include <iostream>

int take(int n, int* arr, int k){
    if(n == k)
        return arr[k];
    return (n, arr, k-1);
}
int main(){
    int n = 3;
    int k = 5;
    int arr[k] = {5, 2 , 1 ,3, 9};
    std::cout << take(n, arr, k);
}