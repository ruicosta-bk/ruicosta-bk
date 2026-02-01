#include <iostream>
#include <cmath>
using namespace std;

int daysBetween(int d1, int m1, int y1, int d2, int m2, int y2)
{
    int leap = 0;
    int gapyear = abs(y2 - y1) - 1, gapday;
    int sum1 = 0, sum2 = 0, sum1_1, sum2_2, tong;
    int leapyear[12] = {31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    // tinh so nam nhuan giua hai nam
    for (int i = 1; i <= gapyear; i++)
    {
        if (y1 < y2)
        {
            if (((y1 + i) % 4 == 0 && (y1 + i) % 100 != 0) || (y1 + i) % 400 == 0)
            {
                leap += 1;
            }
        }
        else
        {
            if (((y2 + i) % 4 == 0 && (y2 + i) % 100 != 0) || (y2 + i) % 400 == 0)
            {
                leap += 1;
            }
        }
    }

    if (y1 == y2)
    {
        gapday = 0;
    }
    else
        gapday = gapyear * 365 + leap;

    // tinh tong so ngay truoc thang can tinh
    for (int i = 0; i < m1 - 1; i++)
    {
        sum1 += leapyear[i];
    }
    for (int i = 0; i < m2 - 1; i++)
    {
        sum2 += leapyear[i];
    }
    if (m1 > 2)
    {
        sum1_1 = sum1 - 1;
    }
    else
    {
        sum1_1 = sum1;
    }
    if (m2 > 2)
    {
        sum2_2 = sum2 - 1;
    }
    else
    {
        sum2_2 = sum2;
    }

    // neu nam la nam khong nhuan thi chi can tru 1

    // xet nam nhuan hoac khong nhuan

    if ((y1 % 4 == 0 && y1 % 100 != 0) || y1 % 400 == 0)
    {
        if ((y2 % 4 == 0 && y2 % 100 != 0) || y2 % 400 == 0) // truong hop 1
        {

            if (y1 == y2)
            {
                tong = abs((sum1 + d1) - (sum2 + d2));
            }
            else if (y1 < y2)
            {

                tong = 366 - (sum1 + d1) + (sum2 + d2) + gapday;
            }
            else
            {
                tong = 366 + (sum1 + d1) - (sum2 + d2) + gapday;
            }
        }

        else // truong hop 2
        {
            if (y1 < y2)
            {
                tong = 366 - (sum1 + d1) + (sum2_2 + d2) + gapday;
            }
            else
            {
                tong = 365 + (sum1 + d1) - (sum2_2 + d2) + gapday;
            }
        }
    }

    else
    {
        if ((y2 % 4 == 0 && y2 % 100 != 0) || y2 % 400 == 0) // truong hop 3
        {

            if (y1 < y2)
            {

                tong = 365 - (sum1_1 + d1) + (sum2 + d2) + gapday;
            }
            else
            {
                tong = 366 + (sum1_1 + d1) - (sum2 + d2) + gapday;
            }
        }

        else // truong hop 4
        {
            if (y1 == y2)
            {
                tong = abs((sum1_1 + d1) - (sum2_2 + d2));
            }
            else if (y1 < y2)
            {

                tong = 365 - (sum1_1 + d1) + (sum2_2 + d2) + gapday;
            }
            else
            {
                tong = 365 + (sum1_1 + d1) - (sum2_2 + d2) + gapday;
            }
        }
    }

    return tong; // default
}

int main()
{
    int d1, m1, y1, d2, m2, y2;
    cin >> d1 >> m1 >> y1 >> d2 >> m2 >> y2;
    cout << daysBetween(d1, m1, y1, d2, m2, y2);
    return 0;
}