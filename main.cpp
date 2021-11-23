#include "Student.hpp"

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	
	Student* v = new Student[10];
	int nota1[2] = {8, 7};
	int nota2[3] = {8, 2, 9};
	int nota3[3] = {5, 9, 8 };
	int nota4[4] = {6, 5, 9, 10};
	int nota5[2] = {7, 2};
	int nota6[5] = {6, 3, 5, 7, 7};
	int nota7[3] = {1, 1, 3};
	int nota8[4] = {4, 7, 10, 9};
	int nota9[1] = {10};
	int nota10[2] = {10, 9};
	//Student(const int*,int,const char*, const char [],int, const char*);
	
	//Student::Student(const int* note, int nr_note, const char* nume_d, const char grupa[],int nr_elevi, const char* nume)
	//               :Nota(note,nr_note),Diriginte(nume_d,grupa),Clasa(nr_elevi)
	
	v[0] = Student(nota1,2,"Dnl Nelu","322AB",1,"Cosmin");
	v[1] = Student(nota2,3,"Dnl Nelu","322AB",1,"Alex");
	v[2] = Student(nota3,3,"Dnl Nelu","322AB",1,"Andrei");
	v[3] = Student(nota4,4,"Dnl Nelu","322AB",1,"Cosmina");
	v[4] = Student(nota5,2,"Dnl Nelu","322AB",1,"Loredana");
	v[5] = Student(nota6,5,"Dnl Nelu","322AB",1,"Teo");
	v[6] = Student(nota7,3,"Dnl Nelu","322AB",1,"Manole");
	v[7] = Student(nota8,4,"Dnl Nelu","322AB",1,"Justi");
	v[8] = Student(nota9,1,"Dnl Nelu","322AB",1,"Cristi");
	v[9] = Student(nota10,2,"Dnl Nelu","322AB",1,"Andrei");
	
	cout<<v[0];
	
	int i;
	for(int i = 0 ; i < 9 ; i ++)
	 cout<<endl<<v[i];
	 cout<<endl;
	
	bool sortat;
	Student aux();
do
{
  sortat = true;
  for(int i = 0 ; i < 8 ; i ++)
    if(v[i].getMedie() < v[i+1].getMedie())
    {
 //     aux.interschimbare(v[i]);
      v[i].interschimbare(v[i+1]);
      sortat = false;
    }
}
while(!sortat);
	
	 for(int i = 0 ; i < 9 ; i ++)
	 {
	 
	 cout<<endl<<v[i];
	}
	
	for(int i = 0 ; i < 9 ; i ++)
	{
		v[i].schimbare_nume("Dna Antoneta");
	}
	for(int i = 0 ; i < 9 ; i ++)
	 {
	 
	 cout<<endl<<v[i];
	}
	
	

	return 0;
}
