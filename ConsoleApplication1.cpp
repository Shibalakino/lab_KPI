#include <iostream>

int main() {
	setlocale(LC_ALL, "Ukr");
	std::cout << "Бойко Олег IС-01 \n";
	float firstTermInTheSequence, commonDifferenceBetweenTerms, step;
	std::cout << "Input value of the first term in the sequence\n";
	std::cin >> firstTermInTheSequence;
	std::cout << "Input value of the common difference between terms \n";
	std::cin >> commonDifferenceBetweenTerms;
	std::cout << "Input value of step\n";
	std::cin >> step;
	float sum = (((2 * firstTermInTheSequence) + (commonDifferenceBetweenTerms * (step - 1))) / 2) * step;
	std::cout << sum;
	return 0;
}
