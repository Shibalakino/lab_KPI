#include <iostream>
void sum(float a, float d, float n) {
	std::cout << n * (2 * a + (n - 1) * d) / 2;

}
int main() {
	float a, d, n;
	std::cout << "Enter values of 'a', 'd', and 'n' for sum of arithmetic progression through space \n" ;
	std::cin >> a >> d >> n;
	sum(a, d, n);
	return 0;
}