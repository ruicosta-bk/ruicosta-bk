#include <iostream>
#include <math.h>
using namespace std;

int nextprime(int x)
{
    int a = x + 1;
    int b = sqrt(a);
    for (int i = 1; i <= b; i++)
    {
        if ((a % i == 0 && i != 1) || a == 1)
        {
            return nextprime(a);
        }
    }
    return a;
}

int main()
{
    int x;
    cin >> x;
    cout << nextprime(x);
    return 0;
}