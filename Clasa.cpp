#include "Clasa.hpp"

Clasa::Clasa():nr_elevi(1){
}
Clasa::Clasa(int nr_elevi){
	this->nr_elevi=nr_elevi;
}
//Clasa::Clasa(int nr_elevi):nr_elevi(nr_elevi){
	
//}
Clasa& Clasa::operator=(const Clasa& obj){
	
	nr_elevi=obj.nr_elevi;
	return *this;
}
ostream& operator<<(ostream& out, const Clasa& obj)
{
	out <<"   nr elevi:"<< obj.nr_elevi<<"  " ;
	return out;
}


