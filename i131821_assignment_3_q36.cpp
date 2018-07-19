//Name  M.Ibrahim
//Roll No 13i-1821
#include <iostream>
using namespace std;
int main()
{
    int x, y, i;
    cout << "enter the number:\n";
    cin >> x;
    y = 1;
    while (x > 0)
    {
        cout << endl;
        i = y;
        while (i > 0)
        {
            cout << "*";
            i = i - 1;
        }
        y = y + 1;
        x = x - 1;
    }
    return 0;
}
