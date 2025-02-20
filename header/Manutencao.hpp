/*#ifndef MANUTENCAO_HPP
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
*/
#ifndef MANUTENCAO_HPP
#define MANUTENCAO_HPP

#include "Equipamento.hpp"
#include "Cliente.hpp"

#include <string>
#include <vector>

using namespace std;

class Manutencao{

    //Equipamento *equipamento;
    //Cliente *cliente;

private:



    int id;
    string Data;
    string RM; 
    string Categoria;
    string Localizacao;
    std::vector<string *> pecas;

    string status;


public:
    Manutencao(const int& _id, const string& _data, const string& _rm, const string& _categoria, const string& _localizacao, /*std::vector<string *> _pecas,*/ const string& _status);
    
    int getId() const;
    string getData() const;
    string getRm() const;
    string getCategoria() const;
    string getLocalizacao() const;
    string getpeças() const;


    //getters e setters
    //void setEquipamento(Equipamento*);
    //void setCliente(Cliente*);

    //Equipamento* getEquipamento();
    //Cliente* getCliente();


    void registrarManutencao(int rm, string data, string descricaoServiços, string *peças, string categoria, string status, string localizacao);

    static void listarManutencao(const vector<Manutencao>& manutencao);

    static vector<Manutencao> filtrarManutencao(const vector<Manutencao>& manutencao, const string& criterio);

    static Manutencao* selecionarManutencao(vector<Manutencao>& manutencao, int idBusca);

    void alterarStatusManutencao(Manutencao& manutencao, const string& novoStatus, const string& novaLocalizacao);

};

#endif 
