#include<iostream>
using namespace std;
int main ()
{
    
    int option;
    cout<<"Enter your Choice";
    cin>>option;
    int a, b, c;
    cout<<"Enter 2 Number";
    cin>>a>>b;
    switch(option)
    {
        case 1:c=a+b;
        break;
        case 2:c=a-b;
        break;
        case 3:c=a*b;
        break;
        case 4:c=a/b;
        break;
    }
    cout<<"Result is "<<c<<endl;
    return 0;
}