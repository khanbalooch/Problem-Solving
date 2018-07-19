//Name  M.Ibrahim
//Roll No 13i-1821
#include <iostream>
using namespace std;
int main()
{
    double w, h, BMI;
    cout << "enter your weight in pounds \n";
    cin >> w;
    cout << "enter your hieght in inches \n";
    cin >> h;
    BMI = (w * 703) / (h * h);
    if (BMI < 18.5)
    {
        cout << "your BMI : " << BMI << " \ncomment :you are under weight\n";
    }
    else
    {
        if (BMI > 25)
        {
            cout << "your BMI : " << BMI << " \ncomment :you are overweight\n";
        }
        else
        {
            cout << "your BMI : " << BMI << " \ncomment :you have optimal weight\n";
        }
    }
    return 0;
}
