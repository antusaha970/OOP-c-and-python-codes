#include <iostream>
using namespace std;

class A
{
public:
    void display()
    {
        cout << "I am Methods" << endl;
    }
};

int main()
{
    A obj;
    obj.display();

    return 0;
}
