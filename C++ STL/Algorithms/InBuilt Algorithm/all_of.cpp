#include <bits/stdc++.h>
using namespace std;

bool is_positive(int x)
{
    return x > 0;
}
int main()
{ // Lamda Function

    // cout << all_of(v.begin(), v.end(),
    //  [](int x){ return x > 0; });
    vector<int> v = {2, 4, 5};
    cout << all_of(v.begin(), v.end(),
                   is_positive);
}