//Name  M.Ibrahim
//Roll No 13i-1821
#include <iostream>
using namespace std;
int main()
{
    int x, y, i;
    cout << "enter the number : \n";
    cin >> x;
    i = x;
    while (x > 0)
    {
        y = i;
        cout << endl;
        while (y > 0)
        {
            cout << "*";
            y = y - 1;
        }
        x = x - 1;
    }
    return 0;
}
