#include <iostream>
#include "Calculator.h"
#include "CalculatorEx.h"

using namespace std;

void main()
{
	CalculatorEx* pCalculator = new CalculatorEx();
								//creates a new CalculatorEx instance and
								//store its address to the pCalculator pointer

	cout << "My Calculations: " << pCalculator->GetName() << endl;

	float input1, input2;
	string operation;
	while (true)
	{
		cout << "Input the first value (0 to exit): ";
		cin >> input1;
		if (input1 == 0)
		{
			break;
		}

		cout << "Input the second value (0 to exit): ";
		cin >> input2;
		if (input1 == 0)
		{
			break;
		}

		operation = "+";
		do
		{
			cout << "Please choose the operation (+ or -): ";
			cin >> operation;
		} while (operation != "+" && operation != "-");

		int a = input1;
		int b = input2;

		if (a == input1 && b == input2)
		{
			int result;
			if (operation == "+")
			{
				result = pCalculator->Add(a, b);
				cout << "Integer Addition: " << a << " + " << b << " = " << result << endl;
			}
			else
			{
				result = pCalculator->Subtract(a, b);
				cout << "Integer Subtraction: " << a << " - " << b << " = " << result << endl;
			}
		}
		else
		{
			float result;
			if (operation == "+")
			{
				result = pCalculator->Add(input1, input2);
				cout << "Float Addition: " << input1 << " + " << input2 << " = " << result << endl;
			}
			else
			{
				result = pCalculator->Subtract(input1, input2);
				cout << "Float Subtraction: " << input1 << " - " << input2 << " = " << result << endl;
			}
		}
	}

	delete pCalculator;
	cout << "Finished!";

}