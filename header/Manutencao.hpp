#ifndef MANUTENCAO_HPP
#define MANUTENCAO_HPP

#include <string>
#include <vector>
using namespace std;

class Manutencao{

    private:
        string rm; 
        string data;
        string descricao_de_servico;
        string pecas;
        string categoria;
        string status;
        string localizacao;


    public:
        Manutencao(const string& _rm, const string& _data, const string& _descricao_de_servico, const string& _pecas, const string& _categoria, const string& _status, const string& _localizacao);
        
    
        string getRm() const;
        string getData() const;
        string getDescricaoDeServico() const;
        string getPecas() const;
        string getCategoria() const;
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
    string pecas; //virou apenas string

    string status;


public:
    Manutencao(const int& _id, const string& _data, const string& _rm, const string& _categoria, const string& _localizacao, const string& _pecas, const string& _status);
    
    int getId() const;
    string getData() const;
    string getRm() const;
    string getCategoria() const;
    string getLocalizacao() const;
    string getpecas() const;


    //getters e setters
    //void setEquipamento(Equipamento*);
    //void setCliente(Cliente*);

    //Equipamento* getEquipamento();
    //Cliente* getCliente();
        string getLocalizacao() const;


    void registrarManutencao(int rm, string data, string descricaoServiços, string peças, string categoria, string status, string localizacao);

    static void listarManutencao(const vector<Manutencao>& manutencao);

    static vector<Manutencao> filtrarManutencao(const vector<Manutencao>& manutencao, const string& criterio);

    static Manutencao* selecionarManutencao(vector<Manutencao>& manutencao, int idBusca);

    void alterarStatusManutencao(Manutencao& manutencao, const string& novoStatus, const string& novaLocalizacao);
        void registrarManutencao(int rm, string data, string descricaoServiços, string *peças, string categoria, string status, string localizacao);
        static void listarManutencao(const vector<Manutencao>& manutencao);
        static vector<Manutencao> filtrarManutencao(const vector<Manutencao>& manutencao, const string& criterio);
        static Manutencao* selecionarManutencao(vector<Manutencao>& manutencao, int idBusca);
        void alterarStatusManutencao(Manutencao& manutencao, const string& novoStatus, const string& novaLocalizacao);

};

#endif 
