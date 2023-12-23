#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, b = 1, counter = 0;
    string in, temp;
    bool c = false;
    cin >> n;
    cin.ignore();
    for (int i = 0; i < n; i++)
    {
        counter = 0;
        getline(cin, in);
        istringstream iss(in);
        vector<string> a;
        while (iss >> temp)
        {
            a.push_back(temp);
        }
        for (int j = 0; j < a.size(); j++)
        {
            if (a[j] == "X" || a[j] == "+" || a[j] == "-")
            {
                counter++;
            }
        }
        counter--;
        for (int j = 0; j < a.size(); j++)
        {
            if (counter <= 0)
            {
                break;
            }
            if (a[j] == "X")
            {
                counter -= 1;
                while (b <= j)
                {
                    if (a[j - b].find(')') == string::npos && a[j - b].find('X') == string::npos && a[j - b].find('+') == string::npos && a[j - b].find('-') == string::npos)
                    {
                        a[j - b] = "(" + a[j - b];
                        break;
                    }
                    b++;
                }
                b = 1;
                while (b < a.size() - j)
                {
                    if (a[j + b].find('(') == string::npos && a[j + b].find('X') == string::npos && a[j + b].find('+') == string::npos && a[j + b].find('-') == string::npos)
                    {
                        a[j + b] = a[j + b] + ")";
                        break;
                    }
                    b++;
                }
                b = 1;
            }
        }

        counter = 0;
        for (int j = 0; j < a.size(); j++)
        {
            if (c == false)
            {
                if (a[j].find('(') != string::npos)
                {
                    a[j] = "#" + a[j];
                    c = true;
                }
            }
            else
            {
                if (a[j].find('(') != string::npos)
                {
                    counter += 1;
                }
                if (a[j].find(')') != string::npos)
                {
                    counter -= 1;
                }
                if (counter == 0)
                {
                    c = false;
                    a[j] = "#" + a[j];
                }
            }
        }
        c = false;

        for (int j = 0; j < a.size(); j++)
        {
            if (counter <= 0)
            {
                break;
            }
            if (a[j] == "+" || a[j] == "-")
            {
                counter -= 1;
                while (b <= j)
                {
                    if (a[j - b].find('#') != string::npos && c == false)
                    {
                        c = true;
                    }
                    else if (a[j - b].find('#') != string::npos && c == true)
                    {
                        c = false;
                    }
                    if (a[j - b].find(')') == string::npos && a[j - b].find('X') == string::npos && a[j - b].find('+') == string::npos && a[j - b].find('-') == string::npos && c == false)
                    {
                        a[j - b] = "(" + a[j - b];
                        break;
                    }
                    b++;
                }
                b = 1;
                while (b < a.size() - j)
                {
                    if (a[j - b].find('#') != string::npos && c == false)
                    {
                        c = true;
                    }
                    else if (a[j - b].find('#') != string::npos && c == true)
                    {
                        c = false;
                    }
                    if (a[j + b].find('(') == string::npos && a[j + b].find('X') == string::npos && a[j + b].find('+') == string::npos && a[j + b].find('-') == string::npos && c == false)
                    {
                        a[j + b] = a[j + b] + ")";
                        break;
                    }
                    b++;
                }
                b = 1;
            }
        }

        for (int j = 0; j < a.size(); j++)
        {
            if (a[j].find('#') != string::npos)
            {
                a[j].erase(0, 1);
            }
        }

        for (int j = 0; j < a.size(); j++)
        {
            if (j != 0)
            {
                cout << " ";
            }
            cout << a[j];
        }
        if (i < n - 1)
        {
            cout << endl;
        }
        cout << endl;
    }
}
