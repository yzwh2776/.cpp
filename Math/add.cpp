#include <iostream>

int add(int i, int j) {

	for (int n= 0; n < j; n++) {
	
		i++;

		};

	return i;

	};

int subtract(int i, int j) {

	for (int n= 0; n < j; n++) {

		i--;

		};

	return i;

	};

int main() {

//Test add function
	std::cout << add(0, 0) << '\n';
	std::cout << add(1, 0) << '\n';
	std::cout << add(0, 1) << '\n';
	std::cout << add(1, 1) << '\n';
	std::cout << add(1, 10) << '\n';

//Test subtract function
	std::cout << subtract(0, 0) << '\n';
	std::cout << subtract(1, 0) << '\n';
	std::cout << subtract(0, 1) << '\n';
	std::cout << subtract(1, 1) << '\n';
	std::cout << subtract(10, 1) << '\n';
	std::cout << subtract(1, 10) << '\n';

	}

 

