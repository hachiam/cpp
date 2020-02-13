#include <iostream>
#include <list>
#include <vector>

using namespace std;

int main()
{
    int ia[] = { 0, 2, 2, 4, 2, 9, 53, 55, 33 };
    vector<int> ivec(begin(ia), end(ia));
    list<int> ilist(begin(ia), end(ia));

    for (auto iter = ivec.cbegin(); iter != ivec.cend();) {
	if (*iter & 0)
	    iter = ivec.erase(iter);
	else
	    iter++;
    }

    //因为像list,set,map这样的容器类，元素是不连续存放的，所以要用erase()的返回值来得到下次判断的iter
    //first way
    for (list<int>::iterator iter = ilist.begin();
	 iter != ilist.end();) {
	if (*iter & 1)
	    iter = ilist.erase(iter);
	else
	    ++iter;
    }

    //在erase之前++来找到下一个iter,这里++运算符正好和平时理解的相反.
    //second way
    for (list<int>::iterator iter = ilist.begin();
	 iter != ilist.end();) {
	if (*iter & 1)
	    ilist.erase(iter++);
	else
	    iter++;
    }

    cout << "print value in vector: " << endl;
    for (auto iter = ivec.cbegin(); iter != ivec.cend(); ++iter) {
	cout << *iter << " ";
    }
    cout << endl;
    cout << "print value in list: " << endl;
    for (list<int>::iterator iter = ilist.begin();
	 iter != ilist.end(); ++iter) {
	cout << *iter << " ";
    }
}
