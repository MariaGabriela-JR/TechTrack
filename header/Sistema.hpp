    #ifndef SISTEMA_HPP
    #define SISTEMA_HPP
    #include "Manutencao.hpp"
    #include "Equipamento.hpp"
    #include <vector>
    #include <string>
    #include <iostream>
    using namespace std;

    class Sistema{
        private:
            vector<Equipamento> equipamentos;
            vector<Manutencao> manutencoes;

        public:

            //CASOS DE USO//

            // Caso de uso 01 - Registrar Manutenção

            void registrarManutencao(const string& rm, const string& data, const string& descricaoServicos,
                const string& peca, const string& categoria, const string& status,
                const string& localizacao);
            
            // Caso de uso 02 - Alterar status de manutenção

            void alterarStatusManutencao(const string& rm, const string& novoStatus, const string& novaLocalizacao);

            // Caso de uso 03 - Consultar manutenção


            // OPERAÇÕES // 

            // Operação 01 - Listar manutenção

            static void listarManutencao(const vector<Manutencao>& manutencao);

            // Operação 02 - Filtrar manutenção

            static vector<Manutencao> filtrarManutencao(const vector<Manutencao>& manutencao, const string& criterio);

            // Operação 03 - Selecionar manutenção

            Manutencao* Sistema::selecionarManutencao(vector<Manutencao>& manutencao, string rmBusca);


            // Operação 04 - Alterar status da manutenção
    
            void alterarStatusManutencao(Manutencao& manutencao, const string& novoStatus, const string& novaLocalizacao);

            
            // Operação 05 - Listar equipamentos
            
            void listarEquipamentos() const;
           

            // Operação 06 - Filtrar equipamentos
            
            static vector<Equipamento> filtrarEquipamentos(const vector<Equipamento>& equipamentos, const string& criterio);

            // Operação 07 - Selecionar equipamento

            Equipamento* selecionarEquipamento(const string& _id);

            // Operação 08 - Registrar manutenção

            void Sistema::registrarManutencao(int rm, string data, string descricaoServicos, string peca, string categoria, string status, string localizacao);

    };

    #endif
