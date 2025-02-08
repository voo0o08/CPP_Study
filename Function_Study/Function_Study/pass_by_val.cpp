#include <iostream>

void param_test(int formal) // 여기서 주소지가 다른곳에 copy됨 
{
	std::cout << formal << std::endl; // 50
	formal = 100;
	std::cout << formal << std::endl; // 100
}

int main()
{
	int actual = 50;
	std::cout << actual << std::endl; // 50
	param_test(actual); //pass actual
	std::cout << actual << std::endl;
	return 0;
}