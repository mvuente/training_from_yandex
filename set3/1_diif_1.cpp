#include <iostream>
#include <sstream>
#include <set>

using  namespace std;

int	main()
{
	string 			str;
	set<string>		arr;

	getline(cin, str);
	if (str.empty())
		return 0;

	string 			parsed;
	stringstream	iss(str);

	while (getline(iss,parsed,' '))
	{
		arr.insert(parsed);
	}
	cout << arr.size() << endl;
	return 0;
}