#include <iostream>

// 함수 프로토타입 선언
void print_array(const int numbers[], int size);
void zero_array(int numbers[], int size);  

int main1058()
{
	int my_numbers[] = { 1, 2, 3, 4, 5 };
	print_array(my_numbers, 5);
	zero_array(my_numbers, 5);
	print_array(my_numbers, 5);
	return 0;
}

void zero_array(int numbers[], int size)
{
	for (int i = 0; i < size; i++)
	{
		numbers[i] = 0;
	}
}

void print_array(const int numbers[], int size)
{
	for (int i = 0; i < size; i++)
	{
		std::cout << numbers[i] << std::endl;
	}
}
