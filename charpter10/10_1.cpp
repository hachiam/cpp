#include <iostream>
#include <utility>
#include <vector>

using namespace std;

int main()
{
    vector<pair<string, int>> Pvec(10);
    int i = 0;

    for (vector<pair<string, int>>::iterator iter = Pvec.begin();
	 iter != Pvec.end(); ++iter) {
	*iter = pair<string, int>("hh", i);
	i++;
    }
}
