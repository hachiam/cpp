#include <bitset>
#include <iostream>

using namespace std;

int main()
{
    bitset<8> bs(9);

    try {
	cout << bs.to_ulong();
    } catch (overflow_error error) {
	cout << "the number have out of unsigned long" << endl;
    }

    return 0;
}
