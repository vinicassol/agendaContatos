//
//  Contato.hpp
//  ContatosClienteFornecedor
//
//  Created by Vinicius Cassol on 15/05/20.
//  Copyright © 2020 Vinicius Cassol. All rights reserved.
//

#ifndef Contato_hpp
#define Contato_hpp

#include <iostream>
#include <string>

using namespace std;

class Contato
{
    
public:
    void setNome(string n);
    string getNome();
    
protected:
    string nome;
    string email;
    string telefone;
    string endereco;
    string aniversario;
    
private:
    
};

#endif /* Contato_hpp */
