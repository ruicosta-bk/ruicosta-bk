#include <iostream>
#include <cmath>
#include <string>
using namespace std;

int main()
{
    int a;
    cin >> a;
    int b = a;
    string s;
    for (int i = 1; b / 10 != 0; i++)
    {
        char c = (b - (b / 10) * 10) + '0';
        s = c + s;
        b /= 10;
    }
    char d = b + '0';
    s = d + s;
    int e = s.size() / 2, f = s.size() - 1;
    if (s.size() == 1)
    {
        cout << "yes";
    }
    else if (s.size() > 2)
    {
        for (int i = 0; i <= e; i++)
        {
            if (s[i] != s[f - i])
            {
                cout << "no";
                break;
            }
            else
                continue;
            cout << "yes";
        }
    }
    else
        cout << "no";

    return 0;
}