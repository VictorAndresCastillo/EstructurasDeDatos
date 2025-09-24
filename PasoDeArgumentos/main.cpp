#include <iostream>
using namespace std; 

int cuadPorValor(int a)
{
	return a = a * a;
}

void cuadPorInt(int* b)
{
	*b = (*b) * (*b);
}

void cuadPorRef(int& c)
{
	c = c * c;
}

int main(int argc, char **argv)
{
	int a = 5, b = 6, c = 7;
	cuadPorValor(a);
	cuadPorInt(&b);
	cuadPorRef(c);
	cout << "a = " << a << " b = " << b << " c = " << c << endl;
	return 0;
}
