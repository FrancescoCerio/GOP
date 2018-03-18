//
//  Dado.cpp
//  GOP
//
//  Created by Francesco Cerio on 18/03/18.
//  Copyright © 2018 Francesco Cerio. All rights reserved.
//

#include "Dado.hpp"
void Dado::lanciaDado(){
    
    this->d = rand() % 6 + 1;
    
    //lanco del secondo dado
    
    this->d += rand() % 6 + 1;
    
    cout << "Hai totalizzato " << this->d << "!" << endl;
}
