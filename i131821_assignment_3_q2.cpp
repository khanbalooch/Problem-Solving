//Name	M.Ibrahim
//Roll No 13i-1821
#include <iostream>
using namespace std;
int main()
{
	int x, y, z;
	cout << "enter num 1" << endl;
	cin >> x;
	cout << "entre num 2" << endl;
	cin >> y;
	cout << "enter num 3" << endl;
	cin >> z;
	if (x > y)
	{
		if (x > z)
		{
			cout << x << "is the largest";
		}
		else
		{
			cout << z << "is the largest";
		}
	}
	else
	{
		if (y > z)
		{
			cout << y << "is the largest";
		}
		else
		{
			cout << z << "is the largest";
		}
	}
	return 0;
}
