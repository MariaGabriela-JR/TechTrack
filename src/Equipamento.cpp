#include <iostream>
#include "../header/Equipamento.hpp"

Equipamento::Equipamento(const string& _id, const string& _nome, const string& _codigo_interno, const string& _fabricante, 
                        const string& _modelo, const string& _data_de_aquisicao) 
            : id(_id), nome(_nome), codigo_interno(_codigo_interno), fabricante(_fabricante), modelo(_modelo), data_de_aquisicao(_data_de_aquisicao) {}


string Equipamento::getId() const { return id; }
string Equipamento::getNome() const { return nome; }
string Equipamento::getCodigoInterno() const { return codigo_interno; }
string Equipamento::getFabricante() const { return fabricante; }
string Equipamento::getModelo() const { return modelo; }
string Equipamento::getDataDeAquisicao() const { return data_de_aquisicao; }

// Listar equipamentos
void Equipamento::listarEquipamentos(const vector<Equipamento>& equipamentos) {
    for (const auto& equipamento : equipamentos) {
        cout << "ID: " << equipamento.getId()
             << ", Nome: " << equipamento.getNome()
             << ", Código Interno: " << equipamento.getCodigoInterno()
             << ", Fabricante: " << equipamento.getFabricante()
             << ", Modelo: " << equipamento.getModelo()
             << ", Data de Aquisição: " << equipamento.getDataDeAquisicao() << endl;
    }
}

// Filtrar equipamentos por nome
vector<Equipamento> Equipamento::filtrarEquipamentos(const vector<Equipamento>& equipamentos, const string& criterio) {
    vector<Equipamento> resultado;
    for (const auto& equipamento : equipamentos) {
        if (equipamento.getNome().find(criterio) != string::npos) {
            resultado.push_back(equipamento);
        }
    }
    return resultado;
}

// Selecionar equipamento por ID
Equipamento* Equipamento::selecionarEquipamento(vector<Equipamento>& equipamentos, string idBusca) {
    for (auto& equipamento : equipamentos) {
        if (equipamento.getId() == idBusca) {
            return &equipamento;
        }
    }
    return nullptr;
}
