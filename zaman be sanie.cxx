#include <iostream>
using namespace std;
int main()
{
 int y , j , o ,n;
 cout << "please enter the hour :";
 cin >> y ;
 cout << "please enter minute :";
 cin >> j;
 cout << "please enter the second :";
 cin >> o;
 cout << "the clock is:" << y << ":" << j << ":" << o ;
 cout << system("cls");
 n = (y * 3600) + (j * 60) + o;
 cout << "your second:"<< n;
 return 0;
}