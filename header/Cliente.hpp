#ifndef CLIENTE_HPP
#define CLIENTE_HPP
#include <string>
using namespace std;

class Cliente {
private:
    int id;
    string nome_da_empresa;
    string razao_social;
    string cnpj;
    string endereco;
    string telefone;
    string email;
    string ramo_de_negocio;

public:
    Cliente(const int& _id, const string& _nome_da_empresa, const string& _razao_social, const string& _cnpj, const string& _endereco, const string& _telefone, const string& _email, const string& _ramo_de_negocio);
    
    int getId() const;
    string getNomeDaEmpresa() const;
    string getRazaoSocial() const;
    string getCnpj() const;
    string getEndereco() const;
    string getTelefone() const;
    string getEmail() const;
    string getRamoDeNegocio() const;
};


class Representante {
private:
    int id;
    string nome;
    string email; 
    string telefone;
    string cpf; 

public:
    Representante(const int& _id, const string& _nome, const string& _email, const string& _telefone, const string& _cpf);
    
    int getId() const;
    string getNome() const;
    string getEmail() const;
    string getTelefone() const;
    string getCpf() const;
};

#endif
