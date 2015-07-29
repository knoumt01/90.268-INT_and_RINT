/*
 * INT.h
 *
 *  Created on: Jun 17, 2015
 *      Author: Matt Knouff
 *      For	  : 90.268 SU 2015 Assignment 4
 */

#ifndef INT_H_
#define INT_H_

#include <iostream>
using namespace std;
class INT {
public:
	INT();		//default constructor

	INT(int);	//parameterized constructor

	INT(INT &);	//copy constructor
	friend ostream &operator<<(ostream &stream, INT o);
	friend istream &operator>>(istream &stream, INT &o);
	operator int();
	INT operator+(INT op2);
	INT operator-(INT op2);
	friend INT operator+(INT op1, int op2);
	friend INT operator-(INT op1, int op2);
	INT operator*(INT op2);
	INT operator/(INT op2);
	friend INT operator*(INT op1, int op2);
	friend INT operator/(INT op1, int op2);
	INT operator-(void);
	INT operator++(); // prefix version of ++
	INT operator++(int notused); // postfix version of ++
	INT operator--(); // prefix version of --
	INT operator--(int notused); // postfix version of --
	const INT &operator +=( const INT & );
	const INT &operator -=( const INT & );
private:
	int x;
};

#endif /* INT_H_ */
