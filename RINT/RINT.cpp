/*
 * RINT.cpp
 *
 *  Created on: Jun 17, 2015
 *      Author: Matt Knouff
 *      For	  : 90.268 SU 2015
 */
#include "RINT.h"

// default constructor
RINT::RINT(){
	x=0;
}

// constructor
RINT::RINT(int a) {
	x=a;
}

// copy constructor
RINT::RINT(RINT &a) {
	x=a.x;
}

ostream &operator<<(ostream &stream, RINT o) {
  stream << o.x << " ";
  return stream; // must return stream
}

istream &operator>>(istream &stream, RINT &o) {
  cout << "Enter integer value : ";
  stream >> o.x;
  return stream;
}

RINT RINT::operator+(RINT op2) {
  RINT temp;
  temp.x = x + op2.x;
  return temp;
}

RINT operator+(RINT op1, int op2) {
  RINT temp;
  temp.x = op1.x + op2;
  return temp;
}

RINT operator+(int op1, RINT op2) {
  RINT temp;
  temp.x = op2.x + op1;
  return temp;
}

RINT RINT::operator-(RINT op2) {
  RINT temp;
  temp.x = x - op2.x;
  return temp;
}
RINT operator-(RINT op1, int op2) {
  RINT temp;
  temp.x = op1.x - op2;
  return temp;
}

RINT operator-(int op1, RINT op2) {
  RINT temp;
  temp.x = op2.x - op1;
  return temp;
}
RINT RINT::operator-(void) {
	RINT tmp;
	tmp.x= -x;
	return tmp;
}

RINT RINT::operator+(void) {
	RINT tmp;
	tmp.x= x;
	return tmp;
}
