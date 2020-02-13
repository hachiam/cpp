#include <iostream>
#include <map>
#include <string>

using namespace std;

int main()
{
    map<string, int> _map;

    string word;

    while (cin >> word) {
	if (_map[word] == 0) {
	    _map.insert(make_pair(word, 1));
	} else
	    _map[word]++;
    }

    map<string, int>::iterator iter;
    iter = _map.begin();
    while (iter != _map.end()) {
	cout << iter->first << ":" << iter->second << endl;
	iter++;
    }
}
