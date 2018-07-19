//Name  M.Ibrahim
//Roll No 13i-1821
#include <iostream>
using namespace std;
int main()
{
    double x, y, s = 0, i = 0;
    while (x >= 0)
    {
        cout << "enter the scores" << endl;
        cin >> x;
        if (x >= 0)
        {
            s = s + x;
            i = i + 1;
        }
    }
    y = s / i;
    cout << "the average of given numbers is " << y << endl;
    return 0;
}
