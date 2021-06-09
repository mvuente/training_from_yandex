#include <iostream>
#include <map>

using namespace std;

//-----------------------------------
//ATTENTION!
//--std=c++11 flag required to compile
//-----------------------------------

int main()
{
	int N, w;
	long height(0), h;
	cin >> N; //number of blocks
	if (!N)
	{
		cout << "0" << endl;
		return 0;
	}
	map<int, long>	pyr; //pyramide

	for (int i = 0; i < N; ++i) //reading parameters of each block
	{
		cin >> w >> h; // width and height of each block
		if (pyr.find(w) == pyr.end() || h > pyr[w]) // there is no such block in the pyramide yet or this block is higher, than current one.
			pyr[w] = h; // replace current block by new one
	}
	for (auto m : pyr)
	{
		height += m.second; //calculating pyramide height
	}
	cout << height << endl;
	return 0;
}