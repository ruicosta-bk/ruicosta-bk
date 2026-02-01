#include <iostream>
#include <cmath>

/*
thiện béo
*/

using namespace std;

bool isSmith(int n)
{
    int a, b, S1 = 0, S2 = 0;
    bool c = true, d = true;
    a = b = n;

    for (int i = 1; i <= sqrt(n); i++)
    {
        if (n % i == 0 && i != 1)
        {
            d = false;
            break;
        }
    }
    if (d) // neu d van true suy ra n la so nguyen to
        return false;

    // lenh tinh tong so cac chu so
    while (a != 0)
    {
        S1 += a - (a / 10) * 10;
        a /= 10;
    }

    // Tu day tinh tong so cac chu so nguyen to
    if (b % 2 == 0) // Xet truong hop bang 2 truoc
    {
        while (b % 2 == 0)
        {
            S2 += 2;
            b /= 2;
        }
    }
    for (int i = 3; i <= n; i += 2) // Xet tu so 3 tro len
    {
        int e = i;
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
            while (b % i == 0)
            {
                while (e != 0)
                {
                    S2 += e - (e / 10) * 10;
                    e /= 10;
                }
                b /= i;
                e = i;
            }
        }
        else
            c = true;
    }

    if (S1 == S2)
    {
        return true;
    }

    return false; // default
}

int main()
{
    int n;
    cin >> n;
    if (isSmith(n))
    {
        cout << "yes";
    }
    else
        cout << "no";
    return 0;
}