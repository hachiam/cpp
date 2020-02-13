#include <fstream>
#include <iostream>
#include <string>
#include <vector>
using namespace std;
int main()
{
    ifstream infile;
    infile.open("foo");
    string line;

    vector<string> svec(10);
    int i = 0;
    while (getline(infile, line) && (i < 10)) {
	svec[i] = line;
	i++;
    }

    for (vector<string>::iterator iter = svec.begin();
	 iter != svec.end(); ++iter) {
	cout << *iter << endl;
    }

    return 0;
}
