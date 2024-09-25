#include <iostream>
using namespace std;

class Employee
{
private:
    int salary;

public:
    Employee()
    {
        salary = 10000;
    }

    int getSalary()
    {
        return salary;
    }
};

int main()
{
    Employee a;
    cout << a.getSalary() << endl;
    return 0;
}
