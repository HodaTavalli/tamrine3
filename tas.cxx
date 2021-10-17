#include <time.h>
#include <iostream>
using namespace std;

int main()

{
 srand(time(0));
 int y , j , z ;
 for  ( int i = 0; i< 1; i++)
 {
  y = rand() % 6 + 1;

  cout << "press 1 to roll the dice :";
  cin >> j ;

  if ( j ==1)
  {
   cout << y ;
  }
  if(y==6)
  { 
   cout << "congratulation, press 1 to roll again :";
   cin >> j;
   system("cls");
   cout << rand() % 6 + 1;
  }
 }
 return 0;
}