//
//  main.cpp
//  ContatosClienteFornecedor
//
//  Created by Vinicius Cassol on 15/05/20.
//  Copyright © 2020 Vinicius Cassol. All rights reserved.
//

#include "Contato.hpp"
#include "Cliente.hpp"
#include "Fornecedor.hpp"
#include <vector>


void imprimeGeral(vector<Contato> c)
{
    for (int i=0; i< c.size(); i++)
    {
        cout << c[i].getNome() << endl;
    }
        
}
void imprimeClientes(vector<Cliente> c)
{
    for (int i=0; i< c.size(); i++)
    {
        cout << c[i].getNome() << " - " << c[i].getNivelFidelidade() << " - " << c[i].getDataUltimaCompra() << endl;
    }
}

void imprimeFornecedores(vector<Fornecedor> f)
{
    for (int i=0; i< f.size(); i++)
    {
        cout << f[i].getNome() << " - " << f[i].getIndiceQualidade() << endl;
    }
}


int main() {
    
    vector<Contato> geral;
    vector<Cliente> clientes;
    vector<Fornecedor> fornecedores;
    
    int op = 0;
    char c;
    
    while(op != 4)
    {
    cout << "====== M E N U ======\n\n";
    cout << "1 - Incluir Contato\n";
    cout << "2 - Listar todos os Contatos\n";
    cout << "3 - Listar contatos por categoria\n";
    cout << "4 - Sair\n";
    
    cin >> op;
    
   // Variaveis e objetos de apoio para insercao de dados
    Contato tempGeral;
    Cliente tempCliente;
    Fornecedor tempFornecedor;
    string nome;
    string data;
    char indices;
    int categoria;
    
    switch (op)
    {
        case 1:
            cout << "\nInforme a categoria do Contato: \n(G) - Geral \n(C) - Cliente \n(F) - Fornecedor\n";
            cin >> c;
            
            cout <<  "Informe o nome do contato \n";
            cin >> nome;
            
            switch (c)
            {
                case 'G':
                case 'g':
                   
                    tempGeral.setNome(nome);
                    geral.push_back(tempGeral); //adicionar na lista de contatos gerais
                    break;
                    
                case 'C':
                case 'c':
                    tempCliente.setNome(nome);
                    
                    cout << "Qual a data da ultima compra? \n";
                    cin >> data;
                    tempCliente.setDataUltimaCompra(data);
                    
                    cout << "Nivel de Fidelidade (A - B - C) ?\n";
                    cin>> indices;
                    tempCliente.setNivelFidelidade(indices);
                    
                    clientes.push_back(tempCliente);
                    break;
                    
                case 'F':
                case 'f':
                    cout << "Informe o indice de qualidade do Fornecedor: ";
                    cin >> indices;
                    tempFornecedor.setNome(nome);
                    tempFornecedor.setIndiceQualidade(indices);
                    
                    fornecedores.push_back(tempFornecedor);
                    break;
            }
            
            break;
        case 2: // listar todos
            imprimeGeral(geral);                 //percorre e apresenta dados do vetor geral
            imprimeClientes(clientes);          //percorre e apresenta dados do vetor clientes
            imprimeFornecedores(fornecedores); //percorre e apresenta dados do vetor fornecedores
            
            break;
        case 3: // listar por categorias
            //solicitar a categoria
            cout << "Informe a categoria desejada: 1 - Geral, 2 - Clientes, 3 - Fornecedores: ";
            cin >> categoria;
            
            //percorrer o vetor especifico e imprimir os dados
            switch (categoria) {
                case 1:
                    imprimeGeral(geral);
                    break;
                case 2:
                    imprimeClientes(clientes);
                    break;
                case 3:
                    imprimeFornecedores(fornecedores);
                    break;
                default:
                    cout << "Categoria inexistente \n";
            }
            
            break;
            case 4:
                cout << "Ateh a proxima!";
        }
    }
    
}
