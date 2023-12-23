#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    string s;
    cin >> n;
    vector<string> v;
    for (int i = 0; i < n; i++)
    {
        v = {};
        cin >> s;
        for (int j = 1; j < s.size() + 1; j++)
        {
            for (int k = 0; k < (s.size() - j) + 1; k++)
            {
                if (find(v.begin(), v.end(), s.substr(k, j)) == v.end())
                {
                    v.push_back(s.substr(k, j));
                }
            }
        }
        // for (auto e : v)
        // {
        //     cout << e << " ";
        // }
        // cout << endl;
        cout << v.size() + 1 << endl;
    }
}
