#include <iostream>

int main() {
	int values[] = { 1, 2, -1, 56,42, -99, 489, -977 };
	for (int i = 0; i < 9; i++) {
		if (values[i] == -99)
			break;
		else if (values[i] == -1)
			continue;
		else
			std::cout << values[i] << std::endl;
	}
}