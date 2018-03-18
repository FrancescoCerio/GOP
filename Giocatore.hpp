//
//  Giocatore.h
//  GOP
//
//  Created by Francesco Cerio on 17/03/18.
//  Copyright © 2018 Francesco Cerio. All rights reserved.
//


#include <string>
#include <iostream>
#include <stdlib.h>

using namespace std;


struct partecipante{
    string nome;
    partecipante *next;
};

typedef partecipante* ptr_part;

class Giocatore{
protected:
    string n;
    int punti;
    partecipante* g;
    
public:
    
    /*
     Inizializzo la lista di giocatori
     */
    ptr_part start();
    
    Giocatore(string n);
    /*
     Funzioni per aggiungere e rimuovere punti di grandezza variabile
     */
    
    int aggiungiPunti(int p);
    
    int rimuoviPunti(int p);
    
    /*
     Funzioni per aggiunge e rimuovere dei punti standard (10 per esempio)
     */
    int aggStdPunti();
    
    
};
