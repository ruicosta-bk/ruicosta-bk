#include <iostream>

using namespace std;

int prevFibonacci(int x)
{
    if (x == 0)
        return 0;
    int a = 0, b = 1, c = 0;
    while (c < x)
    {
        c = a + b;
        a = b;
        b = c;
    }
    if (c > x)
        return a;
    else
        return c;
}

int main()
{
    int x;
    cin >> x;
    cout << prevFibonacci(x);
    return 0;
}