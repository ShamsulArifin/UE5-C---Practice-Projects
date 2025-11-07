#include <iostream>
#include "Calculator.h"

using namespace std;

void main()
{
	Calculator calculator;		// defines the calculator object
	cout << "My Calculations: " << calculator.GetName() << endl;

	float input1, input2;
	while (true)
	{
		cout << "Input the first value (0 to exit): ";
		cin >> input1;
		if (input1 == 0)		//exit if the user entered 0
		{
			break;
		}

		cout << "Input the second value (0 to exit): ";
		cin >> input2;
		if (input1 == 0)		//exit if the user entered 0
		{
			break;
		}

		int a = input1;
		int b = input2;
		if (a == input1 && b == input2)
		{
			int result = calculator.Add(a, b);
			cout << "Integer addition: " << a << " + " << b << " = " << result << endl;
		}
		else
		{
			float result = calculator.Add(input1, input2);
			cout << "Float addition: " << input1 << " + " << input2 << " = " << result << endl;
		}
	}
	cout << "Finished!";
}