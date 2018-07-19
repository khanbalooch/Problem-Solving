//Name M.Ibrahim
//Roll No 13i-1821
#include <iostream>
using namespace std;
int main()
{
    int x;
    cout << "enter the scores\n";
    cin >> x;
    if (x >= 90)
    {
        cout << "the grade  is A+";
    }
    else
    {
        if (x >= 80)
        {
            cout << "the grade is A";
        }
        else
        {
            if (x >= 70)
            {
                cout << "the grade is B";
            }
            else
            {
                if (x >= 60)
                {
                    cout << "the grade is C";
                }
                else
                {
                    if (x >= 50)
                    {
                        cout << "the grade is D";
                    }
                    else
                    {
                        if (x < 50)
                        {
                            cout << "the grade is F";
                        }
                    }
                }
            }
        }
    }
    return 0;
}
