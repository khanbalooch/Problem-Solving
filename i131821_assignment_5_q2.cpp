//Name	Muhammad Ibrahim
//Roll#	13i-1821
#include <iostream>
using namespace std;
int main()
{
    int x, i = 0, k = 5, arr[k];
    while (k > 0)
    {
        cout << "please enter the number:";
        cin >> arr[i];
        i++;
        k--;
    }
    int a = 5, b = 4, c = 3, d = 2, e = 1, f = 0;
    while (a > 0)
    {
        cout << arr[f];
        a--;
        f++;
        while (b > 0)
        {
            cout << arr[f];
            b--;
            f++;
            while (c > 0)
            {
                cout << arr[f];
                c--;
                f++;
                while (d > 0)
                {
                    cout << arr[f];
                    d--;
                    f++;
                    while (e > 0)
                    {
                        cout << arr[f] << endl;
                        e--;
                    }
                }
            }
        }
        f = f - 4;
    }
    return 0;
}
