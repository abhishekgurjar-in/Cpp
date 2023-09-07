#include<iostream>
using namespace std;
int main ()
{
    int n,sum=0;
    cout<<"Enter n number";
    cin>>n;

    for(int i=1;i<=n;i++)
    {
        sum=sum+i;
    }
    cout<<"Sum of first "<< n << " Natural Number is "<<sum;
    return 0;
}