#include <iostream>

int findKGreater(int a[], int n, int k, int value, int b[])
{
    int c = 0;
    int d = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] >= value)
        {
            d = i;
            break;
        }
    }
    if (!d)
        return 0;

    if (a[d] > value)
    {
        for (int j = 0; j < k; j++)
        {
            if (d < n)
            {
                b[j] = a[d];
                d += 1;
                c += 1;
            }
            else
                break;
        }
    }
    else
    {
        for (int j = 0; j < k; j++)
        {
            if (d + 1 < n)
            {
                if (a[d + 1] != value)
                {
                    b[j] = a[d + 1];
                    d += 1;
                    c += 1;
                }
                else
                {
                    d += 1;
                    j -= 1;
                }
            }
            else
                break;
        }
    }
    return c;
}

int main()
{
    int a[] = {1, 1, 2, 2, 3, 3, 4};
    int b[10];
    int m = findKGreater(a, 7, 2, 2, b);
    for (int i = 0; i < 2; i++)
    {
        std::cout << b[i];
    }
    std::cout << m;
    return 0;
}