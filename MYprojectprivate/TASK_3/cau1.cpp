#include <iostream>
#include <vector>

void reverseArray(std::vector<int> &a)
{
    int n = a.size();
    for (int i = 0; i < n / 2; i++)
    {
        int b = a[i];
        a[i] = a[n - 1 - i];
        a[n - 1 - i] = b;
    }
    for (int i = 0; i < n; i++)
    {
        std::cout << a[i] << " ";
    }
}

int main()
{
    int n;
    std::cin >> n;
    std::vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        std::cin >> a[i];
    }
    reverseArray(a);
}