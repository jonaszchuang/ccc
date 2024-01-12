#include <bits/stdc++.h>

using namespace std;
bool bfs(vector<vector<int>> &v, queue<int> &q, unordered_set<int> &visited, int target)
{

    if (q.empty())
    {
        return false;
    }
    int n = q.front();
    q.pop();
    if (n == target)
    {
        return true;
    }
    for (int i = 0; i < v[n].size(); i++)
    {
        if (visited.find(v[n][i]) == visited.end())
        {
            q.push(v[n][i]);
            visited.insert(v[n][i]);
        }
    }
    return bfs(v, q, visited, target);
}
int main()
{
    int st, n, big, small, p, q;
    bool b;
    unordered_set<int> se;
    cin >> st >> n;
    vector<vector<int>> v(st, vector<int>());
    for (int i = 0; i < n; i++)
    {
        cin >> big >> small;
        v[big - 1].push_back(small - 1);
        se.insert(big - 1);
        se.insert(small - 1);
    }
    cin >> p >> q;
    if (se.find(p - 1) == se.end() || se.find(q - 1) == se.end())
    {
        cout << "unknown" << endl;
        return 0;
    }
    queue<int> chi;
    unordered_set<int> visit;
    chi.push(p - 1);
    visit.insert(p - 1);
    b = bfs(v, chi, visit, q - 1);
    if (b)
    {
        cout << "yes" << endl;
        return 0;
    }
    unordered_set<int> visit2;
    queue<int> chil;
    visit2.insert(q - 1);
    chil.push(q - 1);
    b = bfs(v, chil, visit2, p - 1);
    if (b)
    {
        cout << "no" << endl;
        return 0;
    }
    cout << "unknown" << endl;
}
