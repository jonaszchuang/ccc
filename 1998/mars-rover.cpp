#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    int direction;
    int facing = 1;
    bool forward = false;
    cin >> n;
    vector<int> a = {0, 0};
    for (int i = 0; i < n; i++)
    {
        if (i != 0)
        {
            cout << endl;
        }
        a = {0, 0};
        direction = 1;
        facing = 1;
        while (direction != 0)
        {
            cin >> direction;
            if (forward == true)
            {
                if (facing == 1)
                {
                    a[1] += direction;
                }
                else if (facing == 2)
                {
                    a[0] += direction;
                }
                else if (facing == 3)
                {
                    a[1] -= direction;
                }
                else
                {
                    a[0] -= direction;
                }
                forward = false;
            }
            else if (direction == 1)
            {
                forward = true;
            }
            else if (direction == 2)
            {
                if (facing == 4)
                {
                    facing = 1;
                }
                else
                {
                    facing += 1;
                }
            }
            else if (direction == 3)
            {
                if (facing == 1)
                {
                    facing = 4;
                }
                else
                {
                    facing -= 1;
                }
            }
        }
        cout << "Distance is " << abs(a[0]) + abs(a[1]) << endl;

        while (a[0] != 0 || a[1] != 0)
        {
            if (facing == 1)
            {
                if (a[0] > 0 && a[1] >= 0)
                {
                    cout << "3" << endl;
                    facing = 4;
                }
                else if (a[0] < 0 && a[1] >= 0)
                {
                    cout << "2" << endl;
                    facing = 2;
                }
                else if (a[0] == 0 && a[1] > 0)
                {
                    cout << "2\n"
                         << "2\n"
                         << a[1] << endl;
                    break;
                }
                else
                {
                    cout << "1" << endl;
                    cout << abs(a[1]) << endl;
                    a[1] = 0;
                    if (a[0] == 0)
                    {
                        break;
                    }
                }
            }

            if (facing == 2)
            {
                if (a[0] >= 0 && a[1] > 0)
                {
                    cout << "2" << endl;
                    facing = 3;
                }
                else if (a[0] >= 0 && a[1] < 0)
                {
                    cout << "3" << endl;
                    facing = 1;
                }
                else if (a[0] > 0 && a[1] == 0)
                {
                    cout << "2\n"
                         << "2\n"
                         << a[0] << endl;
                    break;
                }
                else
                {
                    cout << "1" << endl;
                    cout << abs(a[0]) << endl;
                    a[0] = 0;
                    if (a[1] == 0)
                    {
                        break;
                    }
                }
            }

            if (facing == 3)
            {
                if (a[0] > 0 && a[1] <= 0)
                {
                    cout << "2" << endl;
                    facing = 4;
                }
                else if (a[0] < 0 && a[1] <= 0)
                {
                    cout << "3" << endl;
                    facing = 2;
                }
                else if (a[0] == 0 && a[1] < 0)
                {
                    cout << "2\n"
                         << "2\n"
                         << abs(a[1]) << endl;
                    break;
                }
                else
                {
                    cout << "1" << endl;
                    cout << abs(a[1]) << endl;
                    a[1] = 0;
                    if (a[0] == 0)
                    {
                        break;
                    }
                }
            }

            if (facing == 4)
            {
                if (a[0] <= 0 && a[1] > 0)
                {
                    cout << "3" << endl;
                    facing = 3;
                }
                else if (a[0] <= 0 && a[1] < 0)
                {
                    cout << "2" << endl;
                    facing = 1;
                }
                else if (a[1] == 0 && a[0] < 0)
                {
                    cout << "2\n"
                         << "2\n"
                         << abs(a[0]) << endl;
                    break;
                }
                else
                {
                    cout << "1" << endl;
                    cout << abs(a[0]) << endl;
                    a[0] = 0;
                    if (a[1] == 0)
                    {
                        break;
                    }
                }
            }
        }
    }
}
