#ifndef MANUTENCAO_HPP
#define MANUTENCAO_HPP

#include <string>
using namespace std;

class Manutencao{

    private:
        string rm;
        string status;
        string descricao_da_manutencao;
        string tipo_de_servico; 
        string data_da_manutencao;
        string problemas_anteriores; 
        string observacoes; 
        string atividades;

    public:
        Manutencao(const string& _rm, const string& _status, const string& _descricao_da_manutencao, const string& _tipo_de_servico, const string& _data_da_manutencao, const string& _problemas_anteriores, const string& _observacoes, const string& _atividade);

        string getRm() const;
        string getStatus() const;
        string getDescricaoDaManutencao() const;
        string getTipoDeServico() const;
        string getDataDaManutencao() const;
        string getProblemasAnteriores() const;
        string getObservacoes() const;
        string getAtividades() const;

};

#endif