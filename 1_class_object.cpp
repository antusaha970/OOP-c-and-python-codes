#include <bits/stdc++.h>
using namespace std;

class A
{
public:
    A()
    {
        printf("I am Constructor\n");
    }

    void display()
    {
        cout << "I am Display Method\n";
    }

    ~A()
    {
        cout << "I am Destructor\n";
    }
};

int main()
{
    A obj;
    obj.display();
}