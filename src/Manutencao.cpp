#include "Manutencao.hpp"
#include <iostream>

Manutencao::Manutencao(const string& _rm, const string& _data, const string& _descricao_de_servico, const string& _pecas, const string& _categoria, const string& _status, const string& _localizacao)
    : rm(_rm), data(_data), descricao_de_servico(_descricao_de_servico), pecas(_pecas), categoria(_categoria), status(_status), localizacao(_localizacao) {}

void Manutencao::setStatus(const std::string& novoStatus) { status = novoStatus; }
void Manutencao::setLocalizacao(const std::string& novaLocalizacao) { localizacao = novaLocalizacao; }


string Manutencao::getRm() const { return rm; }
string Manutencao::getData() const { return data; }
string Manutencao::getDescricaoDeServico() const{return descricao_de_servico; }
string Manutencao::getPecas() const { return pecas; }
string Manutencao::getCategoria() const { return categoria; }
string Manutencao::getStatus() const {return status; }
string Manutencao::getLocalizacao() const {return localizacao; }