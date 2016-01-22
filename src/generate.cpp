#include <iostream>
#include "generate.hpp"

using namespace std;

generate::generate(){
	setTamPopulacao(30);
	setNumGeracoes(100);
}

generate::generate(float tam_populacao, float num_geracoes){
	setTamPopulacao(tam_populacao);
	setNumGeracoes(num_geracoes);
}

generate::generate(int tam_populacao, int num_geracoes){
	setTamPopulacao((float) tam_populacao);
	setNumGeracoes((float) num_geracoes);
}

float generate::getTamPopulacao(){
	return tam_populacao;
}

float generate::getNumGeracoes(){
	return num_geracoes;
}

void generate::setTamPopulacao(float tam_populacao){
	this->tam_populacao = tam_populacao;
}

void generate::setNumGeracoes(float num_geracoes){
	this->num_geracoes = num_geracoes;
}


