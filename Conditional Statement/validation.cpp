#include <iostream>
using namespace std;
int main()
{
    int a, b, c;
    cout << "enter 2 no ";
    cin >> a >> b;
    if (b == 0)
    {
        cout << "Division by Zero" << endl;
    }
    else
    {
        c = a / b;
        cout << c << endl;
    }
}