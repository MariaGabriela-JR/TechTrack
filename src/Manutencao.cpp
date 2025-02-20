# include <iostream>
# include "Manutencao.hpp"

Manutencao::Manutencao(const string& _rm, const string& _status, const string& _descricao_da_manutencao, 
    const string& _tipo_de_servico, const string& _data_da_manutencao, const string& _problemas_anteriores, 
    const string& _observacoes, const string& _atividades)
    : rm(_rm), status(_status), descricao_da_manutencao(_descricao_da_manutencao), tipo_de_servico(_tipo_de_servico), 
    data_da_manutencao(_data_da_manutencao),problemas_anteriores(_problemas_anteriores), observacoes(_observacoes), atividades(_atividades){}

    string Manutencao :: getRm() const {return rm;}
    string Manutencao :: getStatus() const {return status;}
    string Manutencao :: getDescricaoDaManutencao() const {return descricao_da_manutencao;}
    string Manutencao :: getTipoDeServico() const {return tipo_de_servico;}
    string Manutencao :: getDataDaManutencao() const {return data_da_manutencao;}
    string Manutencao :: getProblemasAnteriores() const {return problemas_anteriores;}
    string Manutencao :: getObservacoes() const {return observacoes;}
    string Manutencao :: getAtividades() const {return atividades;}

