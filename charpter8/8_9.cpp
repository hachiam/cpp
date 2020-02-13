#include <fstream>
#include <iostream>
#include <string>
#include <vector>

using namespace std;

typedef vector<string>* Psvec;
void moveStreamToVector(string filename, Psvec Svec)
{
    int i = 0;
    string line;
    ifstream infile;
    infile.open(filename);
    while (getline(infile, line) && (i < (*Svec).size())) {
	(*Svec)[i] = line;
	i++;
    }
    infile.close();
}

int main()
{
    vector<string> Svec(10);
    Psvec psvec1 = &Svec;
    moveStreamToVector("foo", psvec1);

    for (vector<string>::iterator iter = Svec.begin();
	 iter != Svec.end(); ++iter) {
	cout << *iter << endl;
    }

    return 0;
}
