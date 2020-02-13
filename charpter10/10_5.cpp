#include <iostream>
#include <list>
#include <map>
#include <sstream>
#include <string>

using namespace std;

int main()
{
    map<string, list<int>> map1;

    string line, word;
    list<int> ilist;
    int lineNum = 1;
    while (getline(cin, line)) {
	istringstream stream(line);
	while (stream >> word) {
	    ilist.push_back(lineNum);
	    map1[word] = ilist;
	}
	cout << lineNum << "line OK!" << endl;
	lineNum++;
    }

    map<string, list<int>>::iterator iter;
    iter = map1.begin();
    while (iter != map1.end()) {
	cout << iter->first << ":" << endl;
	iter++;
    }
}
