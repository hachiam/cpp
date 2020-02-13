#include <iostream>

using namespace std;

class Test {
private:
    string name;
    int age;
    double* time;

public:
    Test(string name);
    void setAge(int num);
    void PrintInfomation();
};

Test::Test(string Name)
{
    name = Name;
}

void Test::setAge(int num)
{
    age = num;
}

void Test::PrintInfomation()
{
    cout << "the name of this is : " << name << endl;
    cout << "the age of this is : " << age << endl;
}

int main()
{
    //创建对象
    Test test1 = Test("weichenxi");
    test1.setAge(12);
    test1.PrintInfomation();

    return 0;
}
