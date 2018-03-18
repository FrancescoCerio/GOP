//
//  Giocatore.cpp
//  GOP
//
//  Created by Francesco Cerio on 17/03/18.
//  Copyright © 2018 Francesco Cerio. All rights reserved.

#include "giocatore.hpp"



giocatore::giocatore(char n[], int pos){
    strcpy(this->nome, n);
    this->posizione = pos;
}


/*
 Inizializzo il vettore di giocatori che partecipano
 */


void giocatore::initGiocatore(){
    
    
    int n_giocatori;
        
    cout << " - Inserire il numero di partecipanti: ";
    cin >> n_giocatori;
    
    while(n_giocatori < 2){
        
        cout << " - Il numero di giocatori deve essere minimo 2 - " << endl;
        cout << " - Inserire il numero di partecipanti maggiore di 2: ";
        cin >> n_giocatori;
        
    }
    
    
    giocatore *giocatori[n_giocatori];
    char n[30];
    
    for (int i = 1; i <= n_giocatori; i++){
        
        cout << " - Inserire il nome del giocatore " << i << ": ";
        cin >> n;
        giocatori[i] = new giocatore(n, 0);
        
    }
}

/*
 Funzioni per aggiungere e rimuovere punti di grandezza variabile
 */

    
int giocatore::aggiungiPunti(int p){
    
    return (this->punti+=p);
    
}

    
int giocatore::rimuoviPunti(int p){
    
    return (this->punti-=p);

}


/*
 Funzioni per aggiunge e rimuovere dei punti standard (10 per esempio)
 */


int giocatore::aggStdPunti(){
    
    return (this->punti+=10);
    
}


int giocatore::rimuoviStdPunti(){
    
    return (this->punti-=10);
    
}
    

