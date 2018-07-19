//Name  M.Ibrahim
//Roll No 13i-1821
#include <iostream>
using namespace std;
int main()
{
    int x, y, z;
    while (x != -1)
    {
        cout << "enter hours worked\n";
        cin >> x;
        if (x != -1)
        {
            cout << "enter hourly rate\n";
            cin >> y;
            if (x <= 40)
            {
                z = x * y;
                cout << "total pay : " << z << endl;
            }
            else
            {
                z = (40 * y) + ((x - 40) * y / 2);
                cout << "total pay : " << z << endl;
            }
        }
    }
    return 0;
}
