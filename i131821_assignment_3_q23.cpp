//Name  M.Ibrahim
//Roll No 13i-1821
#include <iostream>
using namespace std;
int main()
{
    double x, y, z, a, b, c;
    cout << "please enter 1st test scores carefully\n";
    cin >> x;
    cout << "please enter 2nd test scores carefully\n";
    cin >> y;
    cout << "please enter 3rd test scores carefully\n";
    cin >> z;
    cout << "please enter 4th test scores carefully\n";
    cin >> b;
    cout << "please enter 5th test scores carefully\n";
    cin >> c;
    a = (x + y + z + b + c) / 5;
    cout << "the average of five test scores is :" << a << endl;
    return 0;
}
