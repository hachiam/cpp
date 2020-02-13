#include <iostream>

using namespace std;

int main()
{
    int sum = 0, value1, value2, i, j;

    cout << "please enter two Integer number:" << endl;
    cin >> value1 >> value2;

    if (value1 < value2) {
	i = value1;
	j = value2;
    } else {
	i = value2;
	j = value1;
    }

    for (; i <= j; i++) {
	sum += i;
    }

    cout << "the sum of the number that between first num and the second one is : " << sum << endl;
    return 0;
}
