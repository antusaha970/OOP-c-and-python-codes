#include <iostream>
#include <string>
using namespace std;

class Person
{

public:
    string name;
    Person(string n)
    {
        name = n;
    }

    void personalInfo()
    {
        cout << name << endl;
    }
};

class Company
{
};

class Employee : public Person, public Company
{
public:
    Employee(string n) : Person(n)
    {
    }
};

int main()
{
    Employee obj("raju");
    cout << obj.name << endl;

    return 0;
}
