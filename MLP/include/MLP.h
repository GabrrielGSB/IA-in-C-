#ifndef __MLP_HPP
#define __MLP_HPP

using namespace std;

#include "../../Comum/include/Neuronio.h"

class MLP
{
	public:
		MLP(vector<int> estruturaRede, float taxaAprendizado, int numEpisodiosTotais);

		vector<int> estruturaRede; 
		vector<vector<Neuronio>> rede;
		float erroQuad, erroQuadMed;
		int episodios, numEntradas, numSaidas;
		
		void feedFoward();
		void backPropagation();
		void calcularErroQuad();
		void calcularErroQuadMed();
		void atualizarPesos();
	    void treinar();
	    //void salvarPesos(); 
	    //void obterInformacoesRede();
	    
			
			
};

#endif