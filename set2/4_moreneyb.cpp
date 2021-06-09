#include <iostream>

using namespace std;

int main()
{
	bool 	tmp1(0), tmp2(0);
	int 	count(0), res(0);
	double 	num, rar, frw, mid;
	string 	str;
	getline(cin, str);
	if (!str.empty())
	{
		while (str.find(' ') != string::npos)
		{
			num = stod(str.substr(0, str.find(' ')));
			str = str.substr(str.find(' ') + 1);
			if (count == 0)
			{
				rar = num;
			}
			else if (count == 1)
			{
				mid = num;
			}
			else if (count == 2)
			{
				frw = num;
				if (rar < mid && mid > frw)
					res++;
			}
			else
			{
				rar = mid;
				mid = frw;
				frw = num;
				if (rar < mid && mid > frw)
					res++;
			}
			count++;
		}
		num = stod(str);
		if (count < 2)
		{
			cout << 0 << endl;
			return 0;
		}
		if (count == 2)
		{
			frw = num;
		}
		else if (count > 2)
		{
			rar = mid;
			mid = frw;
			frw = num;
		}
		if (rar < mid && mid > frw)
			res++;
		cout << res << endl;
	}
	return 0;
}