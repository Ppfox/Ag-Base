#ifndef _GENERATE_H
#define _GENERATE_H

class generate{
	private:
		float tam_populacao,num_geracoes;
	public:
		generate();
		generate(float tam_populacao, float num_geracoes);
		generate(int tam_populacao, int num_geracoes);
		
		float getTamPopulacao();
		float getNumGeracoes();
		void setTamPopulacao(float tam_populacao);
		void setNumGeracoes(float num_geracoes);
		
};

#endif