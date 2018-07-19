//Name  M.Ibrahim
//Roll No 13i-1821
#include <iostream>
using namespace std;
int main()
{
    int x, y, i, z;
    cout << "enter the number:";
    cin >> x;
    y = x;
    z = x;
    while (x > 0)
    {
        i = z;
        cout << endl;
        while (i > 0)
        {
            cout << y;
            i = i - 1;
        }
        z = z - 1;
        x = x - 1;
    }
    return 0;
}
