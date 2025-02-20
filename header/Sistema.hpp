#ifndef SISTEMA_HPP
#define SISTEMA_HPP
#include "Manutencao.hpp"
#include <string>
using namespace std;

class Sistema{
    public:
        void registrarManutencao(int rm, string data, string descricaoServicos, string peca, string categoria, string status, string localizacao);
        static void listarManutencao(const vector<Manutencao>& manutencao);
        static vector<Manutencao> filtrarManutencao(const vector<Manutencao>& manutencao, const string& criterio);
        static Manutencao* selecionarManutencao(vector<Manutencao>& manutencao, string rmBusca);
        void alterarStatusManutencao(Manutencao& manutencao, const string& novoStatus, const string& novaLocalizacao);
    
};



#endif