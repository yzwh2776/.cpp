#include <iostream>

int multiply(int i, int j) {

	int k= 0;

	for(int n= 0; n < j; n++) {
		
		for(int m= 0; m < i; m++) {

			k++;

			};	

		};

	return k;

	};

int main() {

	std::cout << multiply(3, 4) << '\n';
	std::cout << multiply(4, 3) << '\n';

	};
