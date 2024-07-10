#include <iostream>
#include <array>
#include <string>

bool is_empty(int val){

	return val == -1;

	};
	

int main(){

	std::array<int, 3> _array1= {1, 2, 3};
	std::array<float, 3> _array2= {0.1, 0.01, 0.001};
	std::array<std::string, 3> _array3= {"one", "two", "three"};

	for (int i= 0; i< _array1.size(); i++){

		std::cout << _array1[i] << ' ';
		std::cout << _array2[i] << ' ';
		std::cout << _array3[i] << ' ';
		std::cout << '\n';

		}

	}


