#include <iostream>
#include <string>

using namespace std;

int main()
{
	string marius = "";
	cin >> marius;
	string doc = "";
	cin >> doc;

	if(marius.size() >= doc.size())
	{
		cout << "go" << endl;
	}
	else
	{
		cout << "no" << endl;
	}
    return 0;
}

