#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
    vector<string*> Psvec;

    for (int i = 0; i < 10; i++) {
	string str = "haha";
	string* Pstr = &str;
	Psvec.push_back(Pstr);
    }

    for (vector<string*>::iterator iter = Psvec.begin();
	 iter != Psvec.end(); ++iter) {
	cout << **iter << endl;
    }

    return 0;
}
