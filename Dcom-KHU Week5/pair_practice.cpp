#include <iostream>
#include <utility>

using namespace std;

int main()
{
	pair<int, int> t1 = { 10,13 };
	pair<int, int> t2 = { 4,6 };
	cout << t2.first << ' ' << t2.second << endl;
	if (t2 < t1)
		cout << "t2 < t1";

	return 0;
}
