// 재귀함수 예제
// Recursive Function
#include <iostream>

unsigned long long factorial(unsigned long long n)
{
	if (n == 0)// base case
	{
		return 1;
	}
	return n * factorial(n - 1);
}

int main04140217()
{
	std::cout << factorial(5) << std::endl;
	return 0;
}
