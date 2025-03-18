#include <iostream>
#include <cstdlib>

#define MODE 1

#if !defined MODE
#error "You must define MODE before compilation"
#endif

#if MODE == 1
int add(int a, int b)
{
	return a + b;
}
#endif

int main()
{
#if MODE == 0
	std::cout << "Working in training mode" << std::endl;

#elif MODE == 1
	std::cout << "Working in combat mode" << std::endl;

	int number1, number2;

	std::cout << "Enter the number 1: ";
	std::cin >> number1;

	std::cout << "Enter the number 2: ";
	std::cin >> number2;

	std::cout << "The result of the addition: " << add(number1, number2) << std::endl;

#else
std::cout << "Unknown mode. Shutdown." << std::endl;
#endif

	return EXIT_SUCCESS;
}