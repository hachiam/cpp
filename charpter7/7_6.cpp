#include <iostream>

using namespace std;

void exchange(int* a, int* b)
{

    int tmp;
    tmp = *a;
    *a = *b;
    *b = tmp;
}

int main()
{
    int num1 = 45, num2 = 78;
    int* Pi1 = &num1;
    int* Pi2 = &num2;

    cout << num1 << ", " << num2 << endl;
    exchange(Pi1, Pi2);

    cout << "after exchange" << endl;
    cout << num1 << ", " << num2 << endl;

    return 0;
}
