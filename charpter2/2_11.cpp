#include <iostream>
using namespace std;

int main()
{
    int base, exponent, result = 1;
    cout << "please enter two number!" << endl;
    cout << "base: ";
    cin >> base;
    cout << "exponent: ";
    cin >> exponent;
    cout << endl;

    for (int i = 0; i != exponent; i++) {
	result *= base;
    }

    cout << "result: " << result << endl;
    return 0;
}
