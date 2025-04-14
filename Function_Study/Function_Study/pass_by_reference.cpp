#include <iostream>

// 참조자 -> &기호 사용
void scale_number(int& num);

int main04141106()
{
	int number = 1000;
	scale_number(number);
	std::cout << number << std::endl;
	return 0;
}

void scale_number(int& num)
{
	if (num > 100) 
	{
		num = 100;
	}
}