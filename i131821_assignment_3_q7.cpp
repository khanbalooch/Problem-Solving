//Name	M.Ibrahim
//Roll No 13i-1821
#include <iostream>
using namespace std;
int main()
{
    int x, y;
    cout << "enter 1st number:\n";
    cin >> x;
    cout << "enter 2nd number:\n";
    cin >> y;
    if (x > y)
    {
        cout << "the decreasing order is"
             << ":" << x << "," << y;
    }
    else
    {
        cout << "the decreasing order is"
             << ":" << y << "," << x;
    }
    return 0;
}
