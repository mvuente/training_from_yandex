#include <iostream>
#include <cmath>

// DANGEROUS! SPAGHETTY CODE.

using namespace std;

void data_calculator(std::pair<int, int>& res, int naetage, int K1, int M)
{
	int numetagey = static_cast<int>(ceil(static_cast<float>(K1) / naetage));
	res.first = static_cast<int>(ceil(static_cast<float>(numetagey) / M));
	res.second = numetagey - ((K1 / naetage) / M) * M;
	if (res.second == 0)
		res.second = M;
}

void eror(int naetage, std::pair<int, int> check, int K1, int K2, int M, pair<int, int> res)
{
	data_calculator(check, naetage, K1, M);
	if (check.first != res.first)
		res.first = 0;
	if (check.second != res.second)
		res.second = 0;
	cout << res.first << " " << res.second << endl;
}


int main() {
	int K1, K2;
	long M;
	std::pair<int, int>	base;
	cin >> K1 >> M >> K2 >> base.first >> base.second;
	std::pair<int, int>	res(-1, -1);
	if (base.first == 1 && base.second == 1)
	{
		if (M > 1)
		{
			if (K1 <= K2)
			{
				res.first = 1;
				res.second = 1;
			}
			else
			{
				res.second = 0;
				if (K1 <= M * K2)
					res.first = 1;
				else
					res.first = 0;
			}
		}
		else
		{
			res.second = 1;
			if (K1 > K2)
				res.first = 0;
			else
				res.first = 1;
		}
	}
	else if (base.second <= M)
	{
		int naetage = static_cast<int>(ceil(static_cast<float>(K2) / (static_cast<long>(base.first - 1) * M +  base.second)));
		data_calculator(res, naetage, K1, M);
		std::pair<int, int>	check1(base), check2(base);
			if (naetage > 1)
			{
				data_calculator(check1, naetage + 1, K2, M);
				data_calculator(check2, naetage - 1, K2, M);
				if (base == check1)
				{
					eror(naetage + 1, check1, K1, K2, M, res);
					return 0;
				}
				if (base == check2)
				{
					eror(naetage - 1, check1, K1, K2, M, res);
					return 0;
				}
			}
			else if (naetage == 1 && M == 1)
			{
				res.first = K1;
				res.second = 1;
				cout << res.first << " " << res.second << endl;
				return 0;
			}
		data_calculator(check1, naetage, K2, M);
		if (base != check1)
		{
			res.first = -1;
			res.second = -1;
		}
			}
	cout << res.first << " " << res.second << endl;
	return 0;
}
