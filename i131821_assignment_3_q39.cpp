//Name  M.Ibrahim
//Roll No  13i-1821
#include <iostream>
using namespace std;
int main()
{
    int x, y, i, j;
    cout << "enter the number:";
    cin >> x;
    j = x;
    i = 1;
    while (x > 0)
    {
        cout << endl;
        y = j;
        while (y > 0)
        {
            cout << i;
            y = y - 1;
        }
        x = x - 1;
        i = i + 1;
    }
    return 0;
}
