//Name  M.Ibrahim
//Roll No 13i-1821
#include <iostream>
using namespace std;
int main()
{
    int x, i, y;
    cout << "enter the number \n";
    cin >> x;
    y = x;
    while (x > 0)
    {
        i = y;
        cout << endl;
        while (i > 0)
        {
            cout << y;
            i = i - 1;
        }
        x = x - 1;
    }
    return 0;
}
