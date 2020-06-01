#include <iostream>
using namespace std;

template <typename T>
void my_swap(T *a, T *b)
{
	T temp;
	temp = *a;
	*a = *b;
	*b = temp;
}

int main()
{
	cout << "Give Two Integer values" << endl;
	int a;
	int b;
	cin >> a >> b;
	my_swap(&a, &b);
	cout << "Swap:" << endl;
	cout << "A is: " << a << endl;
	cout << "B is: " << b << endl;
	cout << "Give two Float values" << endl;
	float x, y;
	cin >> x >> y;
	my_swap(&x, &y);
	cout << "Swap:" << endl;
	cout << "X is: " << x << endl;
	cout << "Y is: " << y << endl;
	cout << "Give two Strings" << endl;
	string q, w;
	cin >> q >> w;
	my_swap(&q, &w);
	cout << "Swap:" << endl;
	cout << "q is: " << q << endl;
	cout << "w is: " << w << endl;
	return 0;
}
