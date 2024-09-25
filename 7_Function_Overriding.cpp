#include <iostream>
using namespace std;

class Calculator
{
public:
    int sum(int num1, int num2)
    {
        return num1 + num2;
    }

    int sum(int num1, int num2, int num3)
    {
        return num1 + num2 + num3;
    }
};

int main()
{
    Calculator cal;
    cout << cal.sum(1, 2, 3) << endl;
    cout << cal.sum(1, 2) << endl;

    return 0;
}
