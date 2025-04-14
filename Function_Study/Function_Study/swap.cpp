#include <iostream>

void swap(int& a, int& b);

int main()
{
	int x = 10, y = 20;
	std::cout << x << " " << y << std::endl; // 10 20
	swap(x, y);
	std::cout << x << " " << y << std::endl; // 20 10
	return 0;
}

void swap(int& a, int& b)
{
	int temp = a;
	a = b;
	b = temp;
}