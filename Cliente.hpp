//
//  Cliente.hpp
//  ContatosClienteFornecedor
//
//  Created by Vinicius Cassol on 15/05/20.
//  Copyright © 2020 Vinicius Cassol. All rights reserved.
//

#ifndef Cliente_hpp
#define Cliente_hpp

#include "Contato.hpp"

class Cliente : public Contato
{
public:
    void setDataUltimaCompra(string d);
    void setNivelFidelidade(char n);
    string getDataUltimaCompra();
    char getNivelFidelidade();
    
private:
    string dataUltimaCompra;
    char nivelFidelidade;
};

#endif /* Cliente_hpp */
