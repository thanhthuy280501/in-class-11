//****************************************************************************
// Program:	rshift.cpp
// Author:	S. Turner
// Date:	10/30/22
//
// This is a program with a non-templated version of a "shift right" function,
// which is used to shift contents of an array to the right. In this case,
// it accepts an array and a count as its parameters. The act of right-
// shifting moves everything's index up by 1 except for the last one, which
// is placed into array[0].
//****************************************************************************

#include <iostream>
#include <ctime>
using namespace std;

//**************************************************************
// This shifts everything to the right. (Really, it's more of
// a rotate function.)
//**************************************************************
void rshift(int *array, int count) {
  int i;					// Loop iterator

  int temp = array[count - 1];
  for (i = 0; i < count - 1; i++)
    array[i+1] = array[i];
  array[0] = temp;

}

int main() {

  int a[5] = {1, 55, 23, 74, 99};		// Statically defined array
  int i;					// Loop iterator

  cout << "Before shift: " << endl;		// Print it out
  for (i = 0; i < 4; i++)
    cout << a[i] << " - ";
  cout << a[4] << endl;
  cout << "-----------------" << endl;
  
  rshift(a, 5);					// Right shift, then
  cout << "After shift: " << endl;		// print it out again.
  for (i = 0; i < 4; i++)
    cout << a[i] << " - ";
  cout << a[4] << endl;

  return 0;
}

