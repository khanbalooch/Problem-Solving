//Name   Muhammad Ibrahim
//Roll No 13i-1821
#include <iostream>
using namespace std;
int main()
{
	int x, y;
	float z;
	cout << "please enter the number of checks :";
	cin >> x;
	cout << "please enter your begining balance :";
	cin >> y;
	if (y >= 0)
	{
		if (x >= 0 && x < 20)
		{
			if (y >= 400)
			{
				z = 10 + .10;
				cout << "the bank's fees is :$" << z << endl;
			}
			else
			{
				z = 10 + .10 + 15;
				cout << "the bank's fees is :$" << z << endl;
			}
		}

		else
		{
			if (x >= 20 && x <= 39)
			{
				if (y >= 400)
				{
					z = 10 + .08;
					cout << "the bank's fees is :$" << z << endl;
				}
				else
				{
					z = 10 + .08 + 15;
					cout << "the bank's fees is :$" << z << endl;
				}
			}

			else
			{
				if (x >= 40 && x <= 59)
				{
					if (y >= 400)
					{
						z = 10 + .06;
						cout << "the bank's fees is :$" << z << endl;
					}
					else
					{
						z = 10 + .06 + 15;
						cout << "the bank's fees is :$" << z << endl;
					}
				}

				else
				{
					if (x >= 60 && x <= 100)
					{
						if (y >= 400)
						{
							z = 10 + .04;
							cout << "the bank's fees is :$" << z << endl;
						}
						else
						{
							z = 10 + .04 + 15;
							cout << "the bank's fees is :$" << z << endl;
						}
					}
				}
			}
		}
	}

	if (x > 100)
	{
		cout << "please enter the valid number\n";
	}
	if (x < 0)
	{
		cout << "please enter the correct number of checks!\n";
	}
	if (y < 0)
	{
		cout << "the account is overdrawn" << endl;
	}
	cout << "thanks! using c++\n";
	return 0;
}
