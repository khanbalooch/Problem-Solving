//Name  M.Ibrahim
//Roll No 13i-1821
#include <iostream>
using namespace std;
int main()
{
    int arr[5], i = 0, j = 1, x;
    while (i < 5)
    {
        cout << "enter the sale for store  " << j << " :\n";
        cin >> arr[i];
        i = i + 1;
        j = j + 1;
    }
    i = 0;
    j = 1;
    while (i < 5)
    {
        x = arr[i] / 100;
        cout << endl
             << "store " << j << " : ";
        while (x > 0)
        {
            cout << "*";
            x = x - 1;
        }
        i = i + 1;
        j = j + 1;
    }
    return 0;
}
