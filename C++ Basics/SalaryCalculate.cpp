#include<iostream>
using namespace std;
int main ()
{
    float basic;
    float percentAllow;
    float percentDeduct;
    float netSalary;
    cout<<"Enter Basic Salary:";
    cin>>basic;
    cout<<"Enter percent of Allowencess :";
    cin>>percentAllow;
    cout<<"Emter percent of Deduction :";
    cin>>percentDeduct;

    netSalary=basic*percentAllow/100-basic*percentDeduct/100;
    cout<<"Net Salary is :"<<netSalary<<endl;
}