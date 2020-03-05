#include <iostream>

// MS Code Analysis
int main()
{
	int a[10];

	for (size_t i = 0; i < 10; i++)
	{
		if (i == 2)
		{
			a[i]; // C6001 not Detected.
		}
		if (i == 1)
		{
			a[i]; // C6001 Detected.
		}
		//a[i]; // C6001 Detected.
	}
}
