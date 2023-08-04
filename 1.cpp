#include <iostream>

int main()
{
	int count {};
	for(int i = 1; i < 1000;i++) {
		if(i % 3 == 0 || i % 5 == 0) count += i;
	}
	std::cout << count << "\n";
	return 0;
}
