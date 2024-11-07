//****************************************************************************
// Program:	addup01.cpp
// Author:	S. Turner
// Date:	11/02/22
//
// This demonstrates a non-templated function addUp that accepts a templated
// class instance as a parameter.
//****************************************************************************
#include <iostream>

using namespace std;

#include "triple.h"
#include "triple.cpp"

int addUp(const Triple& theTriple) {
  return theTriple.getFirst() + theTriple.getSecond() + theTriple.getThird();
}

int main() {

  Triple p1(42,17,94);			// Only initially supports int.
  int i;


//  Triple p2(4.3, 9.5, 1.4);		// This might be a float Triple, 
//  float f;				// but it also needs template stuff.


  cout << "(" << p1.getFirst() << "," << p1.getSecond() << "," << p1.getThird() << ")" << endl;

  i = addUp(p1);
  cout << i << endl;

  cout << "-----------------" << endl;

  return 0;
}
