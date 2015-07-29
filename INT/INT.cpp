/*
 * INT.cpp
 *
 *  Created on: Jun 17, 2015
 *      Author: Matt Knouff
 *      For   : 90.268 SU 2015
 */

#include <iostream>
#include "int.h"

// default constructor
INT::INT() {
	x=0;
}

// constructor
INT::INT(int a) {
	x=a;
}

//copy constructor
INT::INT(INT &a) {
	x=a.x;
}

ostream &operator<<(ostream &stream, INT o) {
  stream << o.x << " ";
  return stream; // must return stream
}

istream &operator>>(istream &stream, INT &o) {
  cout << "Enter integer value : ";
  stream >> o.x;
  return stream;
}

// Overloaded addition
INT INT::operator+(INT op2)  {
  INT temp;
  temp.x = x + op2.x;
  return temp;
}

// Overloaded subtraction
INT INT::operator-(INT op2) {
  INT temp;
  temp.x = x - op2.x;
  return temp;
}

// converter
INT::operator int() {
return x;
}

// overloaded multiplication
INT INT::operator* (INT op2) {
  INT temp;
  temp.x = x * op2.x;
  return temp;
}

// Overloaded division
INT INT::operator/(INT op2) {
  INT temp;
  temp.x = x / op2.x;
  return temp;
}

INT operator+(INT op1, int op2) {
  INT temp;
  temp.x = op1.x + op2;
  return temp;
}

INT operator-(INT op1, int op2) {
  INT temp;
  temp.x = op1.x - op2;
  return temp;
}

INT operator*(INT op1, int op2) {
  INT temp;
  temp.x = op1.x * op2;
  return temp;
}

INT operator/(INT op1, int op2) {
  INT temp;
  temp.x = op1.x / op2;
  return temp;
}

INT INT::operator-(void) {
	INT tmp;
	tmp.x= -x;
	return tmp;
}

// overloaded INT++
INT INT::operator++() {
  x++;
  return *this;
}

// Overloaded postfix ++
INT INT::operator++(int notused) {
  INT temp = *this;
  x++;
  return temp;
}

INT INT::operator--() {
  x--;
  return *this; // return altered value
}

// Overloaded postfix ++
INT INT::operator--(int notused){
  INT temp = *this;
  x--;
  return temp;
}

const INT &INT::operator += ( const INT &a) {
	x = x + a.x;
	return *this;
}

const INT &INT::operator -= ( const INT &a) {
	x = x - a.x;
	return *this;
}


