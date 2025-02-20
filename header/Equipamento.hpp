#ifndef EQUIPAMENTO_HPP
#define EQUIPAMENTO_HPP

#include <string>
#include <vector>
using namespace std;

class Equipamento{

private:
    string id;
    string nome;
    string codigo_interno; 
    string fabricante;
    string modelo;
    string data_de_aquisicao;

public:
    Equipamento(const string& _id, const string& _nome, const string& _codigo_interno, const string& _fabricante, const string& _modelo, const string& _data_de_aquisicao);
    
    string getId() const;
    string getNome() const;
    string getCodigoInterno() const;
    string getFabricante() const;
    string getModelo() const;
    string getDataDeAquisicao() const;

    static void listarEquipamentos(const vector<Equipamento>& equipamentos);
    static vector<Equipamento> filtrarEquipamentos(const vector<Equipamento>& equipamentos, const string& criterio);
    static Equipamento* selecionarEquipamento(vector<Equipamento>& equipamentos, string idBusca);


};

#endif 
