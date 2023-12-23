#include <bits/stdc++.h>

using namespace std;

vector<float> split(vector<float> v)
{
    int s;
    float p;
    vector<float> r;
    cin >> s >> p;
    s = s - 1;
    float percent = p / float(100), perc = float(1) - percent;

    for (int i = 0; i < v.size(); i++)
    {
        if (i == s)
        {
            r.push_back(percent * v[i]);
            r.push_back(perc * v[i]);
        }
        else
        {
            r.push_back(v[i]);
        }
    }
    return r;
}
vector<float> join(vector<float> v)
{
    int s;
    vector<float> r;
    cin >> s;
    for (int i = 0; i < v.size(); i++)
    {
        if (i == s - 1)
        {
            r.push_back(v[s - 1] + v[s]);
            i++;
        }
        else
        {
            r.push_back(v[i]);
        }
    }
    return r;
}
int main()
{
    int n, in = 0;
    vector<float> v;
    float a;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> a;
        v.push_back(a);
    }
    while (in != 77)
    {
        cin >> in;
        if (in == 99)
        {
            v = split(v);
        }
        else if (in == 88)
        {
            v = join(v);
        }
    }
    for (auto e : v)
    {
        cout << e << " ";
    }
    cout << endl;
}
