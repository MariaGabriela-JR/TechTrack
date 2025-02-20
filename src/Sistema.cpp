#include "Manutencao.hpp"
#include "Sistema.hpp"
#include <iostream>

void Manutencao::registrarManutencao(int rm, string data, string descricaoServicos, string *peca, string categoria, string status, string localizacao) {
    
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
        cout << "Data: " << m.getData() << endl;
        cout << "RM: " << m.getRm() << endl;
        cout << "Categoria: " << m.getCategoria() << endl;
        cout << "Localizacao: " << m.getLocalizacao() << endl;
        cout << "Pecas: " << m.getPecas() << endl;
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
