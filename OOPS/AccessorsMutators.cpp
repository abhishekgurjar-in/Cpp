#include<iostream>
using namespace std;

class Rectangle
{
    private:
    int length;
    int breadth;
    public:
    void setLength (int l)
    {
        length=l;
    }
    void setBreadth (int b)
    {
        breadth=b;
    }
    int area () 
    {
        return length*breadth;
    }
    int perimeter()
    {
        return 2*(length+breadth);
    }
};
int main()
{
    Rectangle r1;
    r1.setLength(10);
    r1.setBreadth(5);
    cout<<r1.area();
    return 0;
}