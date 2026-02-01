#include <iostream>
#include <string>
using namespace std;

int main()
{
    string s;
    int sum = 0, a = 0;
    getline(cin, s);
    for (int i = s.size() - 1; i >= 0; --i)
    {
        if (s[i] == ' ')
        {
            a += 1;
        }
        else
            break;
    }
    s.erase(s.size() - a);
    for (int i = s.size() - 1; i >= 0; --i)
    {
        if (s[i] != ' ')
        {
            sum += 1;
        }
        else
            break;
    }
    cout << sum;
    return 0;
}