#include <iostream>

using namespace std;

int main()
{
	int howmany;
	cin >> howmany;
	
	int *array = new int[howmany];
	for (int i =0; howmany > i; ++i)
		cin >> array[i];

	int whatnum;
	cin >> whatnum;

	int num = 0;
	for (int i = 0; howmany > i; ++i)
	{
		if (array[i] == whatnum)
			++num;
	}
	cout << num << endl;

	delete[] array;
	return 0;

}