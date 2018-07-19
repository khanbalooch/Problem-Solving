//M.Ibrahim
//Roll No 13i-1821
#include <iostream>
using namespace std;
int main()
{
    int x, i, j, k, l;
    cout << "enter number  \n";
    cin >> x;
    i = 0;
    j = 1;
    k = 0;
    l = 1;
    while (l <= x)
    {
        j = j + k;
        k = i;
        i = j;
        l = l + 1;
    }
    cout << "the required number is :" << j << endl;
    return 0;
}
