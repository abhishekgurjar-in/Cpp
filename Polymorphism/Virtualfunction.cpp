#include <iostream>
using namespace std;

class Base
{
public:
    virtual void fun()
    {
        cout << "fun of Base " << endl;
    }
};
class Derived : public base
{
public:
    virtual void fun()
    {
        cout << "fun of Derived" << endl;
    }
};
int main()
{
    Derived d;
    Base *ptr = &d;
    ptr->fun();
}
