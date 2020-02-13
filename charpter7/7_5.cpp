#include <iostream>

int bigger(int first, int* second)
{
    if (first > *second)
	return first;
    else
	return *second;
}

int main()
{
    int num1 = 123;
    int num2 = 234;

    int* Pi = &num2;
    std::cout << bigger(num1, Pi) << std::endl;

    return 0;
}
