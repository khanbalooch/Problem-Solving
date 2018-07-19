//Name  M.Ibrahim
//Roll No 13i-1821
#include <iostream>
using namespace std;
int main()
{
    double x, i;
    cout << "please enter your number" << endl;
    cin >> x;
    i = 0.00001;
    while (i * i < x)
    {
        i = i + 0.00001;
    }
    cout << "the square root of"
         << " " << x << " "
         << "is"
         << " " << i << endl;
    return 0;
}
