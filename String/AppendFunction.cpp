#include <iostream>
#include <string>
using namespace std;
int main()
{
    string str = "Hello";
    cout << str.capacity() << endl;
    str.append(" hjbhbh,hgbmnbuv,mnbb bvhgbnb");
    cout << str.capacity() << " " << str.length() << endl;
    cout << str << endl;
    return 0;
}