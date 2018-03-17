/*
 * Mazzo.cpp
 *
 *  Created on: 17 mar 2018
 *      Author: rashe
 */


#include "Mazzo.h"


Mazzo::Mazzo(int carte_mazzo=40) {

	srand (time(NULL)); //successivamente la variabile time sarà inizializzata
						//solo una volta dall'istanza esecutore

	ntipi_carte[EXODIA] = 3;
	this->n_G = 1;
	this->n_O = 1;
	this->n_P = 1;



	this->decidi_numero_tipi_carte (carte_mazzo) ;

}



void Mazzo::decidi_numero_tipi_carte (int dim_Mazzo ) {

	//indice di prababilità di generare una carta del tipo "effetto"
	//da inserire nel mazzo creato casualmente durante l'esecuzione del gioco.
	//è esclusa la probabilità per l'effetto "EXODIA" in quanto ci saranno sicuramente
	//solo 3 carte prestabilite nel mazzo (G,O,P)
	int prob_effetti[n_effetti-1] = { 25 , 45 , 60 , 70 , 100 };
								  /*{ 25 , 20 , 15 , 10 , 30  }*/
	int x;

	int i=0;
	while (i < dim_Mazzo - 3) {

		x = rand() % 100 ;

		int j = 0;
		while ( x >= prob_effetti[j] )
		{
			j++;
		}

		this->ntipi_carte[j+1] ++ ;

	}

}

Carta* Mazzo::pescaCarta() {

}

Mazzo::~Mazzo() {}


