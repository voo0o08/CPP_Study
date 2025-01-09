#include <iostream>

void print_world() {
	std::cout << "World" << std::endl;
	std::cout << "from print_world" << std::endl;
}

void print_hello() {
	std::cout << "Hello" << std::endl;
	print_world();
	std::cout << "from print_hello()" << std::endl;
}

int main() {
	print_hello();
	std::cout << "from main()" << std::endl;
	return 0;
}