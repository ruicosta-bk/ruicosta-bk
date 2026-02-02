#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    int a[10], n;
    ifstream file1("thulan1.txt");

    if (!file1.is_open())
    {
        cout << "Khong mo duoc file";
        return 1;
    }

    file1 >> n; // số phần tử

    for (int i = 0; i < n; i++)
    {
        file1 >> a[i];
        cout << a[i] << '\n';
    }

    file1.close();
    return 0;
}
