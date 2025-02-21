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

            
            // Caso de uso 02 - Alterar status de manutenção

            void alterarStatusManutencao(const string& rm, const string& novoStatus, const string& novaLocalizacao);

            // Caso de uso 03 - Consultar manutenção

            void consultarManutencao(const string& rm);

            // OPERAÇÕES // 

            // Operação 01 - Listar manutenção

            static void listarManutencao(const vector<Manutencao>& manutencao);

            // Operação 02 - Filtrar manutenção

            static vector<Manutencao> filtrarManutencao(const vector<Manutencao>& manutencao, const string& criterio);

            // Operação 03 - Selecionar manutenção

            Manutencao* selecionarManutencao(vector<Manutencao>& manutencao, string rmBusca);


            // Operação 04 - Alterar status da manutenção
    
            void alterarStatusManutencao(Manutencao& manutencao, const string& novoStatus, const string& novaLocalizacao);

            
            // Operação 05 - Listar equipamentos
            
            void listarEquipamentos(const std::vector<Equipamento>& equipamento);
           

            // Operação 06 - Filtrar equipamentos
            
            static vector<Equipamento> filtrarEquipamentos(const vector<Equipamento>& equipamentos, const string& id);

            // Operação 07 - Selecionar equipamento

            static Equipamento* selecionarEquipamento(vector<Equipamento>& equipamentos, const string& _id);

            // Operação 08 - Registrar manutenção

            void registrarManutencao(const string& rm, const string& data, const string& descricaoServicos, const string& peca, const string& categoria, const string& status, const string& localizacao);
    };

    #endif
