//
//  Cliente.cpp
//  ContatosClienteFornecedor
//
//  Created by Vinicius Cassol on 15/05/20.
//  Copyright © 2020 Vinicius Cassol. All rights reserved.
//

#include "Cliente.hpp"

void Cliente::setDataUltimaCompra(string d)
{
    dataUltimaCompra = d;
}

void Cliente::setNivelFidelidade(char n)
{
    nivelFidelidade = n;
}

string Cliente::getDataUltimaCompra()
{
    return dataUltimaCompra;
}
char Cliente::getNivelFidelidade()
{
    return nivelFidelidade;
}
