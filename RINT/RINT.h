/*
 * RINT.h
 *
 *  Created on: Jun 17, 2015
 *      Author: Matt Knouff
 *      For	  : 90.268 SU 2015
 */

#ifndef RINT_H
#define RINT_H
#include <iostream>
using namespace std;

class RINT
{
private :
	int x;
public:
	RINT();		// default constructor
	RINT(int);	// constructor
	RINT(RINT &);	//copy constructor
	friend ostream &operator<<(ostream &stream, RINT o);
	friend istream &operator>>(istream &stream, RINT &o);
	RINT operator+(RINT op2);
	friend RINT operator+(RINT op1, int op2);
	friend RINT operator+(int op1, RINT obp);
	RINT operator-(RINT op2);
	friend RINT operator-(RINT op1, int op2);
	friend RINT operator-(int op1, RINT obp);
	RINT operator+(void);
	RINT operator-(void);
};
#endif
 /* RINT_H_ */
