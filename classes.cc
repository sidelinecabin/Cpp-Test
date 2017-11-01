#include "classes.h"

MathsOnNumbers::MathsOnNumbers(int a, int b)
{
	Number1 = a;
	Number2 = b;
}

MathsOnNumbers::~MathsOnNumbers()
{

}

int MathsOnNumbers::add()
{
	return Number1 + Number2;
}

int MathsOnNumbers::subtract()
{
	return Number1 - Number2;
}
