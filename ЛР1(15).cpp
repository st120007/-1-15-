#include <iostream>
#include <cstdlib>
using namespace std;
int main()
{

	setlocale(0, "");
	int x, a, n;
	cout << "Введите произвольное число ";
	cin >> x;
	a = x;
	n = 1;
	while (a != 0) {
		n *= 10;
		a = a / 10;
	}
	n /= 10;
	while (x != 0) {
		a = x / n;
		x = x % n;
		n /= 10;
		cout << abs(a) << '\n';

	}
	return 0;
}