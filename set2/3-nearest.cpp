#include <iostream>

using namespace std;

int main()
{
	int n, dif, x, count(0);

	cin >> n;
	if (n == 0)
	{
		cout << 0 << endl;
		return 0;
	}
	int arr[n];
	for (int i= 0; i < n; ++i)
	{
		cin >> arr[i];
	}
	cin >> x;
	dif = abs(x - arr[0]);
	int i;
	for (i = 0; i < n; ++i)
	{
		if (dif > abs(x - arr[i]))
		{
			dif = abs(x - arr[i]);
			count = i;
		}
	}
	cout << arr[count] << endl;
	return 0;
}