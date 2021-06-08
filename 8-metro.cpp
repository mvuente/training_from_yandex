#include <iostream>
#include <map>

using namespace std;

void	print(map<pair<int, char>, int >::iterator itn, map<pair<int, char>, int >::iterator itnn)
{
	cout << itn->first.first << " " << itnn->first.first << endl;
}

int main()
{
	string 			intev1, intev2, poesd1, poesd2;

	cin >> intev1 >> intev2 >> poesd1 >> poesd2;
	pair<int, char>	amin((stoi(intev1, nullptr, 10) + 1) * stoi(poesd1, nullptr, 10)
		- stoi(intev1, nullptr, 10), 'a');
	pair<int, char>	amax((stoi(intev1, nullptr, 10) + 1) * stoi(poesd1, nullptr, 10)
							+ stoi(intev1, nullptr, 10), 'a');
	pair<int, char>	bmin((stoi(intev2, nullptr, 10) + 1) * stoi(poesd2, nullptr, 10)
							- stoi(intev2, nullptr, 10), 'b');
	pair<int, char>	bmax((stoi(intev2, nullptr, 10) + 1) * stoi(poesd2, nullptr, 10)
							+ stoi(intev2, nullptr, 10), 'b');

	map<pair<int, char>, int >	tanya;

	tanya[amin] = 1;
	tanya[amax] = 2;
	tanya[bmin] = 3;
	tanya[bmax] = 4;
	map<pair<int, char>, int >::iterator itb = tanya.begin();
	map<pair<int, char>, int >::iterator itn = itb;
	itn++;
	map<pair<int, char>, int >::iterator itnn = itn;
	itnn++;

	char tmp = itb->first.second;

	if (itn->first.second == tmp && itn->first.first < itnn->first.first)
	{
		cout << -1 << endl;

	}
	else if (itn->first.first == itnn->first.first)
	{
		cout << itn->first.first << " " << itn->first.first << endl;
	}
	else if (itn->first.second != tmp)
	{
		print(itn, itnn);  // croos
	}
	else
	{
		print(itn, itnn); //inside
	}
	return 0;
}