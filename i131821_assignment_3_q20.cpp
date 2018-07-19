//Name  M.Ibrahim
//Roll No 13i-1821
#include <iostream>
using namespace std;
int main()
{
    int ibm[100];
    int i = 0, largest = 0;
    while (ibm[i] != -1)
    {
        cout << "enter number\n";
        cin >> ibm[i];
        if (ibm[i] != -1)
        {
            if (largest < ibm[i])
            {
                largest = ibm[i];
                i = i + 1;
            }
        }
        cout << "largest number : " << largest << endl;
    }
    return 0;
}
