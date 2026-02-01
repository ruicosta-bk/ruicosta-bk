#include <iostream>
#include <cmath>

using namespace std;

int countTwinPrimes(int n)
{
    int a = 0;
    bool c = true, d = true; // c va d true khi i va i+2 la so nguyen to
    if (n == 2 || n == 3)
    {
        return a;
    }
    for (int i = 3; i <= n; i += 2)
    {
        for (int j = 1; j <= sqrt(i); j++)
        {
            if (i % j == 0 && j != 1)
            {
                c = false;
                break;
            }
        }
        if (c)
        {
            for (int m = 1; m <= sqrt(i + 2); m++)
            {
                if ((i + 2) % m == 0 && m != 1)
                {
                    d = false;
                    break;
                }
            }
            if (d && (i + 2) <= n)
            {
                a += 1;
            }
            else
                d = true;
        }
        else
            c = true;
    }
    return a; // default
}

int main()
{
    int n;
    cin >> n;
    cout << countTwinPrimes(n);
    return 0;
}