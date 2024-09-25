#include <iostream>
#include <string>
using namespace std;

class A
{
public:
    string name;

    A()
    {
        name = "Raju";
    }
};

class B : public A
{
};

class C : public B
{
};

int main()
{
    C obj;
    cout << obj.name << endl;

    return 0;
}
