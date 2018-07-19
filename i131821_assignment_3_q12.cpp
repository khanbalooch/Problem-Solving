//Name  M.Ibrahim
//Roll No 13i-1821
#include <iostream>
using namespace std;
int main()
{
    int x, y, p;
    char a;
    cout << "enter num 1\n";
    cin >> x;
    cout << "enter num 2\n";
    cin >> y;
    cout << "enter the character\n";
    cin >> a;
    if (a == '+')
        p = x + y;
    else if (a == '-')
        p = x - y;
    else if (a == '/')
        p = x / y;
    else if (a == '*')
        p = x * y;
    cout << p;
    return 0;
}
