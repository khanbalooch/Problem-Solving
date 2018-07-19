//Name  Muhammad Ibrahim
//Roll No 13i-1821
#include <iostream>
using namespace std;
int main()
{
    int x, i, j, k;
    cout << "plese enter a number :";
    cin >> x;
    i = x;
    k = x;
    for (x > 0; x--;)
    {
        j = i;
        cout << endl;
        for (j > 0; j--;)
        {
            cout << k;
        }
        i--;
        k--;
    }
    return 0;
}
