#include <iostream>



int main() {
	float a, d, n;
	std::cout << "Input value of a\n";
	std::cin >> a;
	std::cout << "Input value of d\n";
	std::cin >> d;
	std::cout << "Input value of n\n";
	std::cin >> n;
	float sum = (((2 * a) + (d * (n - 1))) / 2) * n;
	std::cout << sum;
	return 0;
}
