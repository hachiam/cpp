#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> ivec(10, 1);
    //    vector<int>::iterator mid = (ivec.begin() + ivec.end()) / 2;
    // right way
    //
    vector<int>::iterator mid = ivec.begin() + ivec.size() / 2;
    cout << *mid << endl;
}
