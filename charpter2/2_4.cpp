#include <iostream>

using namespace std;

int main()
{
    unsigned u = 10, u2 = 42;
    signed result = 0;
    result = u - u2;
    cout << result << endl;
    cout << u2 - u << endl;

    return 0;
}
