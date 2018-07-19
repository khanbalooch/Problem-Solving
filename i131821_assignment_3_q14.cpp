//Name  M.Ibrahim
//Roll No 13i-1821
#include <iostream>
using namespace std;
int main()
{
    int x, y, i;
    cout << "please enter the number : \n";
    cin >> x;
    i = 1;
    y = x;
    if (y < 1)
    {
        cout << "the factorial of"
             << " " << x << " "
             << "is"
             << " " << i << endl;
    }
    else
    {
        if (y >= 1)
        {
            while (i < x)
            {
                y = y * i;
                i = i + 1;
            }
            cout << "the factorial of"
                 << " " << x << " "
                 << "is"
                 << " " << y << endl;
        }
    }
    return 0;
}
