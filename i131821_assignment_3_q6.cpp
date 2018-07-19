//name	 M.Ibrahim:
//Roll No 13i-1821
#include <iostream>
using namespace std;
int main()
{
    int x, y, z;
    cout << "enter 1st number:\n";
    cin >> x;
    cout << "enter 2nd number:\n";
    cin >> y;
    cout << "enter 3rd number:\n";
    cin >> z;
    if (x < y)
    {
        if (x < z)
        {
            cout << x << "is the smallest";
        }
        else
        {
            cout << z << "is the smalest";
        }
    }
    else
    {
        if (y > z)
        {
            cout << z << "is the smallest";
        }
        else
        {
            cout << y << "is the smallest";
        }
    }
    return 0;
}
