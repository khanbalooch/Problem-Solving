//Name  M.Ibrahim
//Roll No 13i-1821
#include <iostream>
using namespace std;
int main()
{
    int arr[21];
    int i = 0, x, a;
    cout << "#   temperature in celsius grade         in fahrenheight\n";
    while (a <= 21)
    {
        arr[a] = a;
        a = a + 1;
    }
    double y;
    a = 1;
    while (i <= 20)
    {
        y = (9 / 5) * arr[i] + 32;
        cout << a << "."
             << "     " << arr[i] << "C                               " << y << "F \n";
        i = i + 1;
        a = a + 1;
    }
    return 0;
}
