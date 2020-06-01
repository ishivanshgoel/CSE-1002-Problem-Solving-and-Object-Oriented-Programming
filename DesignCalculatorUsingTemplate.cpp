#include <iostream>
using namespace std;

template <typename T, typename U>
class calculator
{
public:
	void add(T a, U b);
	void subtract(T a, U b);
	void multiply(T a, U b);
	void division(T a, U b);
};

template <typename T, typename U>
void calculator<T, U>::add(T a, U b)
{
	cout << "Sum:" << a + b << endl;
}

template <typename T, typename U>
void calculator<T, U>::subtract(T a, U b)
{
	cout << "Subtraction:" << a - b << endl;
}

template <typename T, typename U>
void calculator<T, U>::multiply(T a, U b)
{
	cout << "Multiply:" << a * b << endl;
}

template <typename T, typename U>
void calculator<T, U>::division(T a, U b)
{
	cout << "Division:" << a / b << endl;
}

int main()
{
	int a;
	float b;
	cin >> a >> b;
	calculator<int, float> c;
	c.add(a, b);
	c.subtract(a, b);
	c.multiply(a, b);
	c.division(a, b);
	return 0;
}
