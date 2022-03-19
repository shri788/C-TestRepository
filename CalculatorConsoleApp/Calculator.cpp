#include "Calculator.h"

double Calculator::Calculate(int x, char oprator, double y)
{
	switch (oprator)
	{
	case '+':
		return x + y;
		break;

	case '-':
		return x - y;
		break;

	case '*':
		return x * y;
		break;

	case '/':
		return x / y;
		break;

	default:
		return 0.0;
	}
}
