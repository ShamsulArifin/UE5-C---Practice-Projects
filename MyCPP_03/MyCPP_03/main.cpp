#include <iostream>
#include "calculator.h"

using namespace std;

void main()
{
	cout << "My Calculations" << endl;

	float input1, input2;
	while (true)
	{
		cout << "Input the first value (0 to exit): ";		// exit if user entered 0
		cin >> input1;

		if (input1 == 0)
		{
			break;
		}

		cout << "Input the second value (0 to exit): ";		// exit if user entered 0
		cin >> input2;

		if (input1 == 0)
		{
			break;
		}

		int a = input1;
		int b = input2;
		if (a == input1 && b == input2)
		{
			int result = Add(a, b);
			cout << "Integer addition: " << a << " + " << b << " = " << result << endl;
		}
		else
		{
			float result = Add(input1, input2);
			cout << "Float addition: " << input1 << " + " << input2 << result << endl;
		}
	}
	cout << "Finished!";
}