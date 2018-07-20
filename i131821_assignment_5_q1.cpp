//Name	Muhammad Ibrahim
//Roll #	13i-1821
#include <iostream>
using namespace std;
int main()
{
    int x, j, k = 99, i = 0, arr[k];
    j = x;
    k = j;
    cout << "please enter a number :";
    cin >> x;
    if (x > 0)
    {
        while (x != 0)
        {
            if (x % 2 == 0)
            {
                x = x / 2;
                arr[i] = 0;
                i = i + 1;
            }
            else
            {
                x = x / 2;
                arr[i] = 1;
                i = i + 1;
            }
        }
        i = i - 1;
        cout << "the binary representation is:";
        while (i >= 0)
        {
            cout << arr[i] << " ";
            i = i - 1;
        }
    }
    else
    {
        cout << "the binary representation is :0";
    }
    cout << "\n";
    return 0;
}
hun
