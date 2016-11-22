#include <iostream>
#include <string>

using namespace std;

int different = 0;
int same = 0;
int answer;
char letters[1] = {0};
int num_letters[26];
string word;
int main()
{
	cin >> word;
	for (int i = 0; i < word.size(); i++) {
		for (int a = 0; a < 26; a++)
		{
			if (word[i] == char(a + 97))
			{
				num_letters[a]++;
			}
		}
	}
	for (int i = 0; i < 26; i++)
	{
		while(num_letters[i] > 1)
		{
			same--;
			num_letters[i]--;
		}
	}
	if(abs(same) == word.size() - 1)
	{
		answer = 0;
	}
	else
	{
		answer = word.size() + same - 2;
	}
	cout << answer << endl;
	return 0;
}

