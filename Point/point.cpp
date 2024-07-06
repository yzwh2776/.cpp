#include <iostream>
#include <array>

std::array<int, 48> _array1;

void zero_array(){

	for (int i= 0; i < _array1.size(); i++){

		_array1[i]= 0;

		};

	};

void print_array(){
	
	for (int i= 0; i < _array1.size(); i++){

		std::cout << _array1[i];

		};

	};


int main(){

	print_array();
	
	}
