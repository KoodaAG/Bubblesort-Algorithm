#include <iostream>
#include <vector>



int main()
{

	int values[10] = { 19, 15, 223,	1951, 51923, 1,	23, 9, 100, 10 };
	int temp;

	for (int k = 0; k < 10; ++k)
	{
		for (int i = 9; i >= 0; --i)
		{
			if (i != 0)
			{
				if (values[i] < values[i - 1])
				{
					temp = values[i];
					values[i] = values[i - 1];
					values[i - 1] = temp;
				}
			}
		}
	}

	return 0;
}
