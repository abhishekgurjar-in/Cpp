#include<iostream>
#include<climits>
using namespace std;
int main ()
{
    int A[10]={2,4,6,8,12,3,5,7,9,11};
    int min=INT_MAX;
   
    for(auto x:A) 
    {
        if(x<min)
        min=x;
    }
    
    cout<<"Minimum Number is "<<min<<endl;
    return 0;
}