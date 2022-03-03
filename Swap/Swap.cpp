#include <iostream>

void SwapByReference(int& a, int& b);
void SwapByPointer(int* a, int* b);

int main()
{
	int InputA = 10;
	int InputB = 15;

	std::cout << "Input A is: " << InputA << "  -  Input B is: " << InputB << std::endl;
	std::cout << std::endl;
	std::cout << "STL Swap:" << std::endl;
	std::swap(InputA, InputB);
	std::cout << "Input A is: " << InputA << "  -  Input B is: " << InputB << std::endl;
	std::cout << std::endl;
	std::cout << "Reference Swap:" << std::endl;
	SwapByReference(InputA, InputB);
	std::cout << "Input A is: " << InputA << "  -  Input B is: " << InputB << std::endl;
	std::cout << std::endl;
	std::cout << "Pointer Swap:" << std::endl;
	SwapByPointer(&InputA, &InputB);
	std::cout << "Input A is: " << InputA << "  -  Input B is: " << InputB << std::endl;
}

void SwapByReference(int& a, int& b)
{
	int temp = a;
	a = b;
	b = temp;
}

void SwapByPointer(int* a, int* b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
