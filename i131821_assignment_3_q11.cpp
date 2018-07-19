//Name M.Ibrahim
//Roll No 13i-1821
#include <iostream>
using namespace std;
int main()
{
    int x;
    cout << "please enter your age\n";
    cin >> x;
    if (x < 18)
    {
        cout << "you are a child";
    }
    else
    {
        if (x < 65)
        {
            cout << "you are an adult";
        }
        else
        {
            cout << "you are a senior citizen";
        }
    }
    return 0;
}
