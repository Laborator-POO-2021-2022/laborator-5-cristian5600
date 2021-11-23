#ifndef STUDENT_HPP
#define STUDENT_HPP

#include "Diriginte.hpp"
#include "Nota.hpp"
#include "Clasa.hpp"

class Student: public Nota, public Diriginte, public Clasa
{
	char *nume;
public:
	Student();
	Student(const int*,int,const char*, const char [],int, const char*);
	Student(const Student&);
	Student& operator=(const Student&);
	~Student();
	void interschimbare(Student&);
	
	friend ostream& operator<<(ostream&, const Student&);
};

#endif

