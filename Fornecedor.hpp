//
//  Fornecedor.hpp
//  ContatosClienteFornecedor
//
//  Created by Vinicius Cassol on 15/05/20.
//  Copyright © 2020 Vinicius Cassol. All rights reserved.
//

#ifndef Fornecedor_hpp
#define Fornecedor_hpp

#include "Contato.hpp"

class Fornecedor : public Contato
{
public:
    void setIndiceQualidade(char i);
    char getIndiceQualidade();
    
private:
    char indiceQualidade; // 'A' - Otimo, 'B'- Bom, 'C'- Padrao, etc...
};

#endif /* Fornecedor_hpp */
