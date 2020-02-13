#include <deque>
#include <iostream>
#include <list>

using namespace std;

//用list做数据源，将其中的奇数放入一个deque中，偶数放入另外一个deque.

int main()
{
    list<int> ilist = { 1, 2, 3, 5, 6, 7, 3, 23, 4 };
    deque<int> odd_d, even_d;

    for (auto iter = ilist.cbegin(); iter != ilist.cend(); ++iter) {
	if (*iter & 1) //查看最低位，1为奇数，0为偶数
	    odd_d.push_back(*iter);
	else
	    even_d.push_back(*iter);
    }

    return 0;
}
