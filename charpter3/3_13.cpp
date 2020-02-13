#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int number = 0;
    vector<int> ivec;
    while (cin >> number) {
	ivec.push_back(number);
    }

    int isize = ivec.size();
    bool isodd_number = (isize / 2 != 0);
    if (isodd_number) {
	for (vector<int>::size_type ix = 0; ix != isize + 1; ix = ix + 2) {

	    int result = 0;
	    if (ix == isize - 1) {
		result = ivec[ix] + ivec[0];
	    } else {
		result = ivec[ix] + ivec[ix + 1];
	    }

	    cout << result << endl;
	}
    } else {
	for (vector<int>::size_type ix = 0; ix != isize + 1; ix = ix + 2) {

	    int result = 0;
	    result = ivec[ix] + ivec[ix + 1];

	    cout << result << endl;
	}
    }

    return 0;
}
