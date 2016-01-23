#include "generate.hpp"
#include "layout.hpp"

#include <iostream>
#include <ostream>

using namespace std;

layout::layout(){
	 generate* Populacao1 = new generate();

	 cout<<"População inicial: "<<Populacao1->getTamPopulacao()<<endl;
	 cout<<"Gerações a percorrer: "<<Populacao1->getNumGeracoes()<<endl;
}



