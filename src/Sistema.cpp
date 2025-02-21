#include "../header/Manutencao.hpp"
#include "../header/Cliente.hpp"
#include "../header/Equipamento.hpp"
#include "../header/Sistema.hpp"
#include <iostream>
#include <algorithm>


// Operação 01 - Listar manutenções

void Sistema::listarManutencao(const vector<Manutencao>& manutencaos) {
    for (size_t i = 0; i < manutencaos.size(); ++i) {
        const Manutencao& m = manutencaos[i];
        cout << "Data: " << m.getData() << endl;
        cout << "RM: " << m.getRm() << endl;
        cout << "Categoria: " << m.getCategoria() << endl;
        cout << "Localizacao: " << m.getLocalizacao() << endl;
        cout << "Pecas: " << m.getPecas() << endl;
        cout << "Status: " << m.getStatus() << endl;
        cout << "-----------------------------" << endl;
    }
}

// Operação 02 - Filtrar manutenções

vector<Manutencao> Sistema::filtrarManutencao(const vector<Manutencao>& manutencoes, const string& criterio) {
    vector<Manutencao> filtered;
    for (const auto& manutencao : manutencoes) {
        if (manutencao.getRm().find(criterio) != string::npos) { 
            filtered.push_back(manutencao);
        }
    }
    return filtered;
}

// Operação 03 - Selecionar manutenção

Manutencao* Sistema::selecionarManutencao(vector<Manutencao>& manutencao, string rmBusca) {
    auto it = find_if(manutencao.begin(), manutencao.end(), [&rmBusca](const Manutencao& manutencao) {
        return manutencao.getRm() == rmBusca;
    });
    if (it != manutencao.end()) {
        return &(*it);
    }

    return nullptr;
}

// Operação 04 - Alterar status da manutenção

void Sistema::alterarStatusManutencao(Manutencao& manutencao, const string& novoStatus, const string& novaLocalizacao) {
    manutencao.setStatus(novoStatus);
    manutencao.setLocalizacao(novaLocalizacao);
}

// Operação 05 - Listar equipamentos

/*
void Sistema::listarEquipamentos(const std::vector<Equipamento>& equipamentos) {
    std::cout << "ID: " << equipamento[1].getId() << std::endl;
    for (size_t i = 0; i < equipamentos.size(); ++i) {
        const Equipamento& equipamento = equipamentos[i];
        std::cout << "ID: " << equipamento.getId()
                  << ", Nome: " << equipamento.getNome()
                  << ", Código Interno: " << equipamento.getCodigoInterno()
                  << ", Fabricante: " << equipamento.getFabricante()
                  << ", Modelo: " << equipamento.getModelo()
                  << ", Data de Aquisição: " << equipamento.getDataDeAquisicao() << std::endl;
    }
}*/

void Sistema::listarEquipamentos(const std::vector<Equipamento>& equipamentos) {
    if (equipamentos.size() > 1) {
        std::cout << "ID: " << equipamentos[1].getId() << std::endl;
    }

    for (size_t i = 0; i < equipamentos.size(); ++i) {
        const Equipamento& e = equipamentos[i];
        std::cout << "ID: " << e.getId()
                  << ", Nome: " << e.getNome()
                  << ", Código Interno: " << e.getCodigoInterno()
                  << ", Fabricante: " << e.getFabricante()
                  << ", Modelo: " << e.getModelo()
                  << ", Data de Aquisição: " << e.getDataDeAquisicao() << std::endl;
    }
}

// Operação 06 - Filtrar equipamentos

static vector<Equipamento> filtrarEquipamentos(const vector<Equipamento>& equipamentos, const string& criterio){
    vector<Equipamento> resultado;
    for (const auto& equipamento : equipamentos) {
        if (equipamento.getNome().find(criterio) != string::npos) {
            resultado.push_back(equipamento);
        }
    }
    return resultado;
}

// Operação 07 - Selecionar equipamento

Equipamento* Sistema::selecionarEquipamento(const string& _id) {
    for (auto& equipamento : equipamentos) {
        if (equipamento.getId() == _id) {
            return &equipamento;
        }
    }
    return nullptr;
}

// Operação 08 - Registrar manutenção

void registrarManutencao(vector<Manutencao>& manutencao, const string& rm, const string& data, const string& descricaoServicos, const string& peca, const string& categoria, const string& status, const string& localizacao) {
    Manutencao novaManutencao;
    novaManutencao.setStatus(rm);
    novaManutencao.setData(data);
    novaManutencao.setDescricaoDeServico(descricaoServicos);
    novaManutencao.setPecas(peca);
    novaManutencao.setStatus(status);
    novaManutencao.setLocalizacao(localizacao);

    manutencao.push_back(novaManutencao);
    
    cout << "Manutencao registrada com sucesso!" << endl;

}
