#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    int a[10], n;
    ifstream file1;
    file1.open("thulan1.txt");
    if (file1)
    {
        file1 >> n;
        cout << n << '\n';
        for (int i = 0; i < 10; i++)
        {
            file1 >> a[i];
            cout << a[i] << '\n';
        }
        file1.close();
    }
    else
        cout << "ga";

    return 0;
}