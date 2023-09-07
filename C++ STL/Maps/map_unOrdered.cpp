#include <bits/stdc++.h>
using namespace std;
void print(unordered_map<int, string> &m)
{
    cout << m.size() << endl;
    for (auto &pr : m)
    {
        cout << pr.first << " " << pr.second << endl;
    }
}
int main()
{
    unordered_map<int, string> m;
    m[1] = "abc";
    m[2] = "cdc";
    m[3] = "acd";
    m[4] = "acd";
    m[5] = "ach";
    m[2] = "cdc";
    print(m);
}
