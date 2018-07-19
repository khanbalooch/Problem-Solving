//Name   Muhammad Ibrahim
//Noll No 13i-1821
#include <iostream>
using namespace std;
int main()
{
    int x, i, j, k;
    cout << "please enter your number :";
    cin >> x;
    j = 1;
    i = x;
    for (x > 0; x--;)
    {
        k = j;
        cout << endl;
        for (k > 0; k--;)
        {
            cout << i;
        }
        i--;
        j++;
    }
    return 0;
}
