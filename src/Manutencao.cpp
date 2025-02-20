#include "Manutencao.hpp"
#include <iostream>

Manutencao::Manutencao(const string& _rm, const string& _data, const string& _descricao_de_servico, const string& _pecas, const string& _categoria, const string& _status, const string& _localizacao)
    : rm(_rm), data(_data), descricao_de_servico(_descricao_de_servico), pecas(_pecas), categoria(_categoria), status(_status), localizacao(_localizacao) {}


string Manutencao::getRm() const { return rm; }
string Manutencao::getData() const { return data; }
string Manutencao::getDescricaoDeServico() const{return descricao_de_servico; }
string Manutencao::getPecas() const { return pecas; }
string Manutencao::getCategoria() const { return categoria; }
string Manutencao::getStatus() const {return status; }
string Manutencao::getLocalizacao() const {return localizacao; }


/*void Manutencao::registrarManutencao(int rm, string data, string descricaoServicos, string *peca, string categoria, string status, string localizacao) {
    
    rm = to_string(rm);
    data = data;
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
        if (manutencao.getRm().find(criterio) != string::npos) { 
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
    manutencao.localizacao = novaLocalizacao;
}

*/

