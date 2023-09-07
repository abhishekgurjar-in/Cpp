#include <iostream>
using namespace std;

class base
{
public:
    void display()
    {
        cout << "Display of Base " << endl;
    }
};
class Derived : public base
{
public:
    void display()
    {
        cout << "Display of Derived" << endl;
    }
};
int main()
{
    Derived d;
    d.display();
}
