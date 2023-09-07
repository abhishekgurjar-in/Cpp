#include<iostream>
using namespace std;
int main ()
{
    int A[2][3];
    for(auto& x:A)
    {
        for(auto& X:A)
        {
            for(auto& y:x)
            {
                cout<<endl;
            }

            for(auto& y:x)
            {
                for(auto& y:x)
                {
                    cout<<y<<" ";
                }
                cout<<endl;
            }
            return 0;
        }
        
    }
}