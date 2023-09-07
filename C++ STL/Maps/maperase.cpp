#include <bits/stdc++.h>
using namespace std;
void print(map<int, string> &m)
{
    cout << m.size() << endl;
    for (auto &pr : m)
    {
        cout << pr.first << " " << pr.second << endl;
    }
}
int main()
{
    map<int, string> m;
    m[1] = "abc";
    m[2] = "cdc";
    m[3] = "acd";
    m[4] = "acd";
    m[5] = "ach";
    auto it = m.find(3);
    m.erase(3);
    m.clear();
    if (it == m.end())
    {
        cout << "NO value";
    }
    else
    {
        cout << (*it).first << " " << (*it).second << endl;
    }
    print(m);
}
