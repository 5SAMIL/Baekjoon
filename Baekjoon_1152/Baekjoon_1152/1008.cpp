#include<iostream>
using namespace std;

int main(void) {
	double a, b;

	cin >> a >> b;
	cout.fixed;
	cout.precision(15);
	cout << a / b << endl;

	return 0;
}
