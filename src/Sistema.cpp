#include "Manutencao.hpp"
#include "Sistema.hpp"
#include <iostream>

void Sistema::registrarManutencao(int rm, string data, string descricaoServicos, string peca, string categoria, string status, string localizacao) {
    
    rm = rm;
    data = data;
    descricaoServicos = descricaoServicos;
    peca = peca;
    status = status;
    localizacao = localizacao;
    
    cout << "Manutencao registrada com sucesso!" << endl;

}

void Sistema::listarManutencao(const vector<Manutencao>& manutencao) {
    for (const auto& m : manutencao) {
        cout << "Data: " << m.getData() << endl;
        cout << "RM: " << m.getRm() << endl;
        cout << "Categoria: " << m.getCategoria() << endl;
        cout << "Localizacao: " << m.getLocalizacao() << endl;
        cout << "Pecas: " << m.getPecas() << endl;
        cout << "Status: " << m.getStatus() << endl;
        cout << "-----------------------------" << endl;
    }
}

vector<Manutencao> Sistema::filtrarManutencao(const vector<Manutencao>& manutencoes, const string& criterio) {
    vector<Manutencao> filtered;
    for (const auto& manutencao : manutencoes) {
        if (manutencao.getRm().find(criterio) != string::npos) { 
            filtered.push_back(manutencao);
        }
    }
    return filtered;
}


Manutencao* Sistema::selecionarManutencao(vector<Manutencao>& manutencao, string rmBusca) {
    auto it = find_if(manutencao.begin(), manutencao.end(), [&rmBusca](const Manutencao& manutencao) {
        return manutencao.getRm() == rmBusca;
    });
    if (it != manutencao.end()) {
        return &(*it);
    }

    return nullptr;
}

void Sistema::alterarStatusManutencao(Manutencao& manutencao, const string& novoStatus, const string& novaLocalizacao) {
    manutencao.setStatus(novoStatus);
    manutencao.setLocalizacao(novaLocalizacao);
}


