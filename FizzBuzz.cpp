#include <iostream>

using namespace std;
int x = 0;
int y = 0;
int n = 0;

int main()
{
	cin >> x; 
	cin >> y;
	cin >> n;

	for (int i = 1; i <= n; i++)
	{
		if(i % x == 0 && i % y == 0)
		{
			cout << "FizzBuzz" << endl;
		}
		else if(i % x == 0)
		{
			cout << "Fizz" << endl;
		}
		else if(i % y == 0)
		{
			cout << "Buzz" << endl;
		}
		else
		{
			cout << i << endl;
		}
	}
    return 0;
}

