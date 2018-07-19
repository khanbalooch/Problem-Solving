//Name 	m.Ibrahim
//Roll No	13i-1821
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
    if (x > y)
    {
        if (y > z)
        {
            cout << "the decreasing order is" << x << "," << y << "," << z;
        }
        else
        {
            if (z > x)
            {
                cout << "the decreasing order is" << z << "," << x << "," << y;
            }
            else
            {
                cout << "the decreasing order is" << x << "," << z << "," << y;
            }
        }
    }
    else
    {
        if (z > y)
        {
            cout << "the decreasing order is" << z << "," << y << "," << x;
        }
        else
        {
            if (x > z)
            {
                cout << "the decreasing order is" << y << "," << x << "," << z;
            }
            else
            {
                cout << "the decreasing order is" << y << "," << z << "," << x;
            }
        }
    }
    return 0;
}
