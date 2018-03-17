/*
 * Mazzo.h
 *
 *  Created on: 17 mar 2018
 *      Author: rashe
 */

#ifndef MAZZO_MAZZO_H_
#define MAZZO_MAZZO_H_

#include "../carta/Carta.h"
#include <stdlib.h>     /* srand, rand */
#include <time.h> 		/* time */

#define n_effetti 6

enum Effetti { EXODIA = 0 , Raddoppia , Inverti , AbbassaAvversari , Immunity , IndovinaDado };


class Mazzo {

private:

	int n_G;
	int n_O;
	int n_P;

	int ntipi_carte[n_effetti] = 0;


public:

	Mazzo(int carte_mazzo=40);
	//il costruttore inizializza un mazzo di almeno 40 carte formato da
	//3 carte standard (G,O,P) con effetto "EXODIA" e le restanti carte
	//generate in base alla loro probabilità prestabilita di essere create

	void decidi_numero_tipi_carte (int dim_Mazzo) ;

	Carta* pescaCarta () ;

	virtual ~Mazzo() ;
};

