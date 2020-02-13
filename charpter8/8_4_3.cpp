#include <fstream>
#include <iostream>
#include <string>

using namespace std;

ifstream& open_file(ifstream& in, const string& file)
{
    in.close();
    in.clear();

    in.open(file.c_str());
    return in;
}

int main()
{
    ifstream infile;
    ifstream& in = infile;
    string filename = "foo", line;

    ifstream& used = open_file(in, filename);

    while (getline(used, line)) {
	cout << line << endl;
    }

    return 0;
}
