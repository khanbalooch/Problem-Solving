//Name	M.Ibrahim
//Roll No 13i-1821
#include <iostream>
using namespace std;
int main()
{
    int x, y, z;
    cout << "enter 1st number " << endl;
    cin >> x;
    cout << "enter 2nd number " << endl;
    cin >> y;
    cout << "enter 3rd number" << endl;
    cin >> z;
    if (x > y)
    {
        if (y > z)
        {
            cout << "the increasing order is" << z << "," << y << "," << x;
        }
        else
        {
            if (z > x)
            {
                cout << "the increasing order is" << y << "," << x << "," << z;
            }
            else
            {
                cout << "the increasing order is" << y << "," << z << "," << x;
            }
        }
    }
    else
    {
        if (z > y)
        {
            cout << "the increasing order is" << x << "," << y << "," << z;
        }
        else
        {
            if (z < x)
            {
                cout << "the increasing order is" << z << "," << x << "," << y;
            }
            else
            {
                cout << "the increasing order is" << x << "," << z << "," << y;
            }
        }
    }
    return 0;
}
