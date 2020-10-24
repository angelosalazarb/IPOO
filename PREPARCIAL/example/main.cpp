#include <iostream>
using namespace std;

int main(){
int enter = 10;
cin >> enter;
switch (enter)
{
case 1: enter = -4;
case 2: enter = -6;
case 4: break;
case 6: enter = -8;
  break;
default:
  enter = -1;
}

cout << enter;
}