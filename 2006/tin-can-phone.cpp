#include <bits/stdc++.h>

using namespace std;

bool check(vector<int> a, vector<int> b, vector<int> c)
{
    if (b[0] <= max(a[0], c[0]) && b[0] >= min(a[0], c[0]) && b[1] <= max(a[1], c[1]) && b[1] >= min(a[1], c[1]))
    {
        return true;
    }
    return false;
}

int orientation(vector<int> a, vector<int> b, vector<int> c)
{
    int v = (b[1] - a[1]) * (c[0] - b[0]) - (b[0] - a[0]) * (c[1] - b[1]);
    if (v == 0)
    {
        return 0;
    }
    else if (v > 0)
    {
        return 1;
    }
    else
    {
        return 2;
    }
}

bool intersect(vector<int> a, vector<int> b, vector<int> c, vector<int> d)
{
    int o = orientation(a, b, c);
    int o1 = orientation(a, b, d);
    int o2 = orientation(c, d, a);
    int o3 = orientation(c, d, b);
    if (o != o1 && o2 != o3)
    {
        return true;
    }
    if (o == 0 && check(a, c, b))
    {
        return true;
    }
    if (o1 == 0 && check(a, d, b))
    {
        return true;
    }
    if (o2 == 0 && check(c, a, d))
    {
        return true;
    }
    if (o3 == 0 && check(c, b, d))
    {
        return true;
    }
    return false;
}

bool intercecting(vector<vector<int>> corners, vector<int> r, vector<int> j)
{
    for (int i = 0; i < corners.size(); i++)
    {
        if (i == corners.size() - 1)
        {
            if (intersect(corners[i], corners[0], r, j))
            {
                return true;
            }
        }
        else
        {
            if (intersect(corners[i], corners[i + 1], r, j))
            {
                return true;
            }
        }
    }
    return false;
}

int main()
{
    int a, b, c, d, e, n;
    int counter = 0;
    vector<int> r = {};
    vector<int> j = {};
    vector<vector<vector<int>>> buildings = {};
    cin >> a >> b >> c >> d;
    r.push_back(a);
    r.push_back(b);
    j.push_back(c);
    j.push_back(d);
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> e;
        buildings.push_back({});
        for (int j = 0; j < e; j++)
        {
            cin >> a;
            cin >> b;
            buildings[i].push_back({a, b});
        }
        if (intercecting(buildings[i], r, j))
        {
            counter += 1;
        }
    }
    cout << counter << endl;
}
