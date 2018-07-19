//Name  M.Ibrahim
//Roll No 13i-1821
#include <iostream>
using namespace std;
int main()
{
    int x, z, y, a, b, c;
    cout << "enter the length of 1st rectangle\n";
    cin >> x;
    cout << "enter the width of 1st rectangle\n";
    cin >> y;
    cout << "enter the length of 2nd rectangle\n";
    cin >> b;
    cout << "enter the width of 2nd rectangle\n";
    cin >> c;
    z = x * y;
    a = b * c;
    if (z == a)
    {
        cout << "both rectangles have same area\n";
    }
    else
    {
        if (z > a)
        {
            cout << "1st rectangle has greater area\n";
        }
        else
        {
            cout << "2nd rectangle has greater area\n";
        }
    }
    return 0;
}
