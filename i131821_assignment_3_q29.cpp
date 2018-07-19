//Name  M.Ibrahim
//Roll No 13i-1821
#include <iostream>
using namespace std;
int main()
{
    double x, y;
    cout << "enter number of packages saled : \n";
    cin >> x;
    if (x > 0 && x < 10)
    {
        y = 99 * x;
        cout << "total cost : "
             << "$" << y << endl;
    }
    else
    {
        if (x >= 10 && x <= 19)
        {
            y = 99 * x * .8;
            cout << "total cost : "
                 << "$" << y << endl;
        }
        else
        {
            if (x >= 20 && x <= 49)
            {
                y = 99 * x * .7;
                cout << "total cost : "
                     << "$" << y << endl;
            }
            else
            {
                if (x >= 50 && x <= 99)
                {
                    y = 99 * x * .6;
                    cout << "total cost : "
                         << "$" << y << endl;
                }
                else
                {
                    y = 99 * x * .5;
                    cout << "total cost : "
                         << "$" << y << endl;
                }
            }
        }
    }
    return 0;
}
