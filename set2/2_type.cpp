#include <iostream>

using namespace std;

int main()
{
	float 	num, before;
	int		count(0);
	string 	flag("CONSTANT");
	string 	str;

	while (true)
	{
		getline(cin, str);
		num = stof(str, nullptr);
		if (num != -2000000000)
		{
			if (count)
			{
				if (num == before)
				{
					if (flag == "ASCENDING" || flag == "DESCENDING")
						flag = "WEAKLY " + flag;
				}
				else if (num < before)
				{
					if (flag == "CONSTANT")
					{
						if (count > 1)
							flag = "WEAKLY DESCENDING";
						else
							flag = "DESCENDING";
					}
					else if (flag.find("ASCENDING") != flag.npos)
					{
						cout << "RANDOM" << endl;
						return 0;
					}
				}
				else
				{
					if (flag == "CONSTANT")
					{
						if (count > 1)
							flag = "WEAKLY ASCENDING";
						else
							flag = "ASCENDING";
					}
					else if (flag.find("DESCENDING") != flag.npos)
					{
						cout << "RANDOM" << endl;
						return 0;
					}
				}
			}
			count++;
			before = num;
		}
		else
		{
			cout << flag << endl;
			return 0;
		}
	}
	return 0;
}