# include <iostream>
# include "Cliente.hpp"

///// CLIENTE /////

Cliente::Cliente(const int& _id, const string& _nome_da_empresa, const string& _razao_social, 
                 const string& _cnpj, const string& _endereco, const string& _telefone, const string& _email, 
                 const string& _ramo_de_negocio)
    : id(_id), nome_da_empresa(_nome_da_empresa), razao_social(_razao_social), cnpj(_cnpj), 
      endereco(_endereco), telefone(_telefone), email(_email), ramo_de_negocio(_ramo_de_negocio) {}

int Cliente::getId() const {
    return id;
}

string Cliente::getNomeDaEmpresa() const {
    return nome_da_empresa;
}

string Cliente::getRazaoSocial() const {
    return razao_social;
}

string Cliente::getCnpj() const {
    return cnpj;
}

string Cliente::getEndereco() const {
    return endereco;
}

string Cliente::getTelefone() const {
    return telefone;
}

string Cliente::getEmail() const {
    return email;
}

string Cliente::getRamoDeNegocio() const {
    return ramo_de_negocio;
}

///// REPRESENTANTE /////

Representante::Representante(const int& _id, const string& _nome, const string& _email, const string& _telefone, 
                             const string& _cpf)
    : id(_id), nome(_nome), email(_email), telefone(_telefone), cpf(_cpf) {}

int Representante::getId() const {
    return id;
}

string Representante::getNome() const {
    return nome;
}

string Representante::getEmail() const {
    return email;
}

string Representante::getTelefone() const {
    return telefone;
}

string Representante::getCpf() const {
    return cpf;
}

