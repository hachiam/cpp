#include <deque>
#include <iostream>
#include <string>

using namespace std;

int main()
{
    deque<string> sd;

    string word;

    while (cin >> word) {
	sd.push_back(word);
    }

    for (deque<string>::iterator iter = sd.begin();
	 iter != sd.end(); ++iter) {
	cout << *iter << endl;
    }
}
