// #include <iostream>

// int fibonachi(int n){
//     if(n == 0 || n == 1){
//         return n;
//     }
//     //std::cout << n-1 << " + " << n-2 << " = " << fibonachi(n-1)+fibonachi(n-2) << '\n';
//     return fibonachi(n-1)+fibonachi(n-2);
// }

// int main(){
//     int n = 5;
//     std::cout << fibonachi(n);
// }

#include <iostream>

int fibonacci_recursive(int n) {
	if (n == 1 || n == 2) {
		return n;
	}
	return fibonacci_recursive(n - 1) + fibonacci_recursive(n - 2);
}

int fibonacci_iterative(int n) {
	if (n == 1 || n == 2) return n;
	int num1 = 0;
	int num2 = 1;

	for (int i = 2; i < n; i++) {
		int tmp = num2;
		num2 = num1 + num2;
		num1 = tmp;
	}
	return num2;
}

int main() {
	// std::cout << "Iterative evaluation: \n";
	// for (int i = 1; i<=47; i++) {
	// 	std::cout << "fib(" << i << ")=" << fibonacci_iterative(i) << "\n";
	// }

	std::cout << "Recursive evaluation: \n";

	std::cout << "fib(" << 5 << ")=" << fibonacci_recursive(5) << "\n";
	
	return 0;
}