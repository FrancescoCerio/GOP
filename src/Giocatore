//
//  Giocatore.cpp
//  GOP
//
//  Created by Francesco Cerio on 17/03/18.
////  Copyright © 2018 Francesco Cerio. All rights reserved.


#include "Giocatore.hpp"

    
ptr_part Giocatore::start(){
    int n_giocatori;
        
    cout << "Inserire il numero di partecipanti: ";
    cin >> n_giocatori;
        
    int i = 1;
    ptr_part head = g;
    
    while(i <= n_giocatori){
        g = new partecipante;
        cout << "Inserire il nome del giocatore numero " << i << ": ";
        cin >> g->nome;
        g = g->next;
        i++;
            
    }
    return head;
}



Giocatore::Giocatore(string n){
    this->n = n;
}

    
int Giocatore::aggiungiPunti(int p){
    this->punti = this->punti + p;
    return (this->punti);
}

    
int Giocatore::rimuoviPunti(int p){
    this->punti = this->punti - p;
    return (this->punti);
}
    

int Giocatore::aggStdPunti(){
    return (this->punti+=10);
}
    

