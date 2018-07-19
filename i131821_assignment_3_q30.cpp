//Name  M.Ibrahim
//Roll No 13i-1821
#include <iostream>
using namespace std;
int main()
{
    double x, y;
    cout << "enter the mass of the body : \n";
    cin >> y;
    x = y * 9.8;
    if (x <= 1000 && x >= 10)
    {
        cout << "please enter correct value \n";
    }
    else
    {
        if (x < 10)
        {
            cout << "the body is too light\n";
        }
        else
        {
            if (x > 1000)
            {
                cout << "the body is too heavy \n";
            }
        }
    }
    return 0;
}
