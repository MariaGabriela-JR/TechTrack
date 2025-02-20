#include "Manutencao.hpp"
#include <iostream>

Manutencao::Manutencao(const int& _id, const string& _data, const string& _rm, const string& _categoria, const string& _localizacao, const string& _pecas, const string& _status)
    : id(_id), Data(_data), RM(_rm), Categoria(_categoria), Localizacao(_localizacao), pecas(_pecas), status(_status) {}

int Manutencao::getId() const { return id; }
string Manutencao::getData() const { return Data; }
string Manutencao::getRm() const { return RM; }
string Manutencao::getCategoria() const { return Categoria; }
string Manutencao::getLocalizacao() const { return Localizacao; }

string Manutencao::getpecas() const { return pecas; }


//getters e setters

    //void setEquipamento(Equipamento* equipamento) { this->equipamento = equipamento; }
   // void setCliente(Cliente* cliente) { this->cliente = cliente; }

    //Equipamento* getEquipamento() { return this->equipamento; }
    //Cliente* getCliente() { return this->cliente; }

void Manutencao::registrarManutencao(int rm, string data, string descricaoServicos, string pecas, string categoria, string status, string localizacao) {
    
    RM = to_string(rm);
    Data = data;
    descricaoServicos = descricaoServicos;
    pecas = pecas;
    status = status;
    localizacao = localizacao;
    
    cout << "Manutencao registrada com sucesso!" << endl;

}

void Manutencao::listarManutencao(const vector<Manutencao>& manutencao) {
    for (const auto& m : manutencao) {
        cout << "ID: " << m.getId() << endl;
        cout << "Data: " << m.getData() << endl;
        cout << "RM: " << m.getRm() << endl;
        cout << "Categoria: " << m.getCategoria() << endl;
        cout << "Localizacao: " << m.getLocalizacao() << endl;
        cout << "Pecas: " << m.getpecas() << endl;
        cout << "Status: " << m.status << endl;
        cout << "-----------------------------" << endl;
    }
}

vector<Manutencao> Manutencao::filtrarManutencao(const vector<Manutencao>& manutencoes, const string& criterio) {
    vector<Manutencao> filtered;
    for (const auto& manutencao : manutencoes) {
        if (manutencao.getRm().find(criterio) != string::npos) { //falta implementacao de cliente na manutencao
            filtered.push_back(manutencao);
        }
    }
    return filtered;
}


Manutencao* Manutencao::selecionarManutencao(vector<Manutencao>& manutencao, int idBusca) {
    auto it = find_if(manutencao.begin(), manutencao.end(), [&idBusca](const Manutencao& manutencao) {
        return manutencao.getId() == idBusca;
    });
    if (it != manutencao.end()) {
        return &(*it);
    }

    return nullptr;
}

void Manutencao::alterarStatusManutencao(Manutencao& manutencao, const string& novoStatus, const string& novaLocalizacao) {
    manutencao.status = novoStatus;
    manutencao.Localizacao = novaLocalizacao;
}



