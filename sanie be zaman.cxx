#include <iostream>
using namespace std;
int main()
{
	int h, m, s, b;

	cout << "please enter your intended second :";
	cin >> b;
	system("cls");
	h = b / 3600;
	m = b % 3600 / 60;
	s = b % 3600 % 60;
	cout << "the acuurate clock is :" << h << ":" << m << ":" << s;

	return 0;
}