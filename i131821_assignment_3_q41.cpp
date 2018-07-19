//Name  M.Ibrahim
//Roll No 13i-1821
#include <iostream>
using namespace std;
int main()
{
    int x, y, i;
    cout << "enter the number:";
    cin >> x;
    i = x;
    while (x > 0)
    {
        cout << endl;
        y = i;
        while (y > 0)
        {
            cout << x;
            y = y - 1;
        }
        i = i - 1;
        x = x - 1;
    }
    return 0;
}
