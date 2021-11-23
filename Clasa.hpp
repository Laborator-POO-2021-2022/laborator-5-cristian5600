#ifndef CLASA_HPP
#define CLASA_HPP

#include <iostream>
using namespace std;

class Clasa{
protected:
	int nr_elevi;
public:
	Clasa();
	Clasa( int );
	friend ostream& operator<<(ostream&, const Clasa&);
	Clasa& operator=(const Clasa&);
	
	
};


#endif


