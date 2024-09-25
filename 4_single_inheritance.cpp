#include <bits/stdc++.h>
using namespace std;
class A
{
public:
    void display()
    {
        cout << "Display" << endl;
    }
};

class B : public A
{
};

int main()
{
    B obj;
    obj.display();
    return 0;
}