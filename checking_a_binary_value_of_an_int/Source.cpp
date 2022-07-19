#include <iostream>
#include <format>
using namespace std;

int main() {
	short int a{};
	cout << "Please, enter an integer between -32 768 and 32 767: ";
	cin >> a;

	cout << "Binary value of the integer " << a << ": ";
	cout << (a & 0b1000000000000000 ? 1 : 0);
	cout << (a & 0b0100000000000000 ? 1 : 0);
	cout << (a & 0b0010000000000000 ? 1 : 0);
	cout << (a & 0b0001000000000000 ? 1 : 0);
	cout << (a & 0b0000100000000000 ? 1 : 0);
	cout << (a & 0b0000010000000000 ? 1 : 0);
	cout << (a & 0b0000001000000000 ? 1 : 0);
	cout << (a & 0b0000000100000000 ? 1 : 0);
	cout << (a & 0b0000000010000000 ? 1 : 0);
	cout << (a & 0b0000000001000000 ? 1 : 0);
	cout << (a & 0b0000000000100000 ? 1 : 0);
	cout << (a & 0b0000000000010000 ? 1 : 0);
	cout << (a & 0b0000000000001000 ? 1 : 0);
	cout << (a & 0b0000000000000100 ? 1 : 0);
	cout << (a & 0b0000000000000010 ? 1 : 0);
	cout << (a & 0b0000000000000001 ? 1 : 0);

	
	return 0;
}