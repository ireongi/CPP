#include <iostream>
using namespace std;

int main() {
	int number;
	bool isPrime = true;

	cin >> number;

	if (number <= 1) {
		isPrime = false;
	}
	else {
		for (int i = 2; i < number; i++) {
			if (number % i == 0) {
				isPrime = false;
				break;  // for���� Ż��
			}
		}
	}

	if (isPrime)
		cout << number << " is prime number!\n";
	else
		cout << number << " is NOT prime number.\n";

	return 0;
}