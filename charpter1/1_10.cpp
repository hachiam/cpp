#include <iostream>
using namespace std;

int main()
{
    int sum = 0;
    for (int i = 50; i <= 100; i++) {
	sum += i;
    }
    cout << "the sum of 50 to 100 is: " << sum << endl;
    return 0;
}
