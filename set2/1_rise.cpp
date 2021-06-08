#include <iostream>

using namespace std;

int	main()
{
	double 	num, before;
	int 	count(0);
	string 	newstr;
	getline(cin, newstr);
	if (!newstr.empty())
	{
		while (newstr.find(' ') != string::npos)
		{
			num = stod(newstr.substr(0, newstr.find(' ')));
			newstr = newstr.substr(newstr.find(' ') + 1);
			if (count)
			{
				if (num <= before)
				{
					cout << "NO" << endl;
					return 0;
				}
			}
			before = num;
			count++;
		}
		num = stod(newstr);
		if (count)
		{
			if (num <= before)
				cout << "NO" << endl;
			else
				cout << "YES" << endl;
		}
		else
			cout << "YES" << endl;
	}
	return 0;
}