//单词排除集程序
#include <fstream>
#include <iostream>
#include <map>
#include <set>

using namespace std;

void restricted_wc(ifstream& remove_file,
    map<string, int>& word_count)
{
    set<string> exclude; //排除集
    string remove_word;
    while (remove_file >> remove_word) {
	exclude.insert(remove_word); //将想要排除的单词插入排除集
	string word;

	//统计单词
	while (cin >> word) {
	    if (!exclude.count(word))
		++word_count[word];
	}
    }
}

int main()
{
    ifstream remove_file;
    remove_file.open("remove_file");
    ifstream& inputstream = remove_file;
    map<string, int> word_count;
    map<string, int>& outMap = word_count;

    restricted_wc(inputstream, outMap);

    map<string, int>::iterator iter = word_count.begin();
    while (iter != word_count.end()) {
	cout << iter->first << ":" << iter->second << endl;
	++iter;
    }
}
