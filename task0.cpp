#include <iostream>

int factoriel(int n){
	if(n == 1){
		return true;
	}
	return n * factoriel(n-1);
}

int main(){

    int n = 5;
	std::cout << factoriel(n);
}