#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> ivec(10, 2);

    cout << "frist value:" << endl;
    for (vector<int>::iterator iter = ivec.begin();
	 iter != ivec.end(); ++iter) {
	cout << *iter << " ";
    }
    cout << endl;

    cout << "second value: " << endl;

    for (vector<int>::iterator iter = ivec.begin();
	 iter != ivec.end(); ++iter) {
	*iter = *iter * 2;
	cout << *iter << " ";
    }
    cout << endl;

    return 0;
}
