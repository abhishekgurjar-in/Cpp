#include <iostream>
using namespace std;
int main()
{
    int roll;
    cout << "Enter Roll No ";
    cin >> roll;
    if (roll < 1)
    {
        cout << "Invalid Roll No";
    }
    else
    {
        cout << "Valid Roll No";
    }
    return 0;
}