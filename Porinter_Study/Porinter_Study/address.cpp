// 변수의 주소값 얻어오기 
#include <iostream>

int main05140524()
{
	int num = 10;

	std::cout << "Value : " << num << std::endl; // 10
	std::cout << "Address : " << &num << std::endl; // 주소지 출력
	// std::cout << "Address : " << &10 << std::endl; // Error 일반 숫자는 주소지 없음 

	return 0;

}