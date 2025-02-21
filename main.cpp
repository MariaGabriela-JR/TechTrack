#include "./header/Sistema.hpp"
#include "./header/Cliente.hpp"
#include "./header/Equipamento.hpp"
#include "./header/Manutencao.hpp"
#include <iostream>
#include <vector>

using namespace std;

int main() {
    ///// CLIENTES BANCO DE DADOS /////
    Cliente cliente01(1, "Incopisos", "INCOPISOS INDUSTRIA E COMERCIO DE PISOS LTDA", 
                      "55.254.825/0002-05", "Estrada Jose Horacio Pascon, Santa Gertrudes - SP", 
                      "+55 19 35458660", "marketing@incopisos.com.br", "Produção de placas cerâmicas");

    Cliente cliente02(2, "Majopar", "CERÂMICA MAJOPAR LTDA", "64.700.735/0002-91", 
                      "Estrada José Horácio Pascon, Distrito Industrial e Comercial I, Santa Gertrudes - SP", 
                      "+55 19 35458700", "", "Produção de placas cerâmicas");

    Cliente cliente03(3, "Formigres", "CERÂMICA FORMIGRES LTDA", "54.431.591/0001-80", 
                      "Rodovia Washington Luiz, KM 164, Santa Gertrudes - SP", 
                      "+55 19 35458880", "contato@formigres.com.br", "Produção de placas cerâmicas");

    ///// EQUIPAMENTOS BANCO DE DADOS /////
    vector<Equipamento> equipamentos = {
        Equipamento("ATS48D62Y", "Soft Starter 1000", "SS123", "Schneider", "3RW3036", "10-05-2019"),
        Equipamento("FRS585H6T", "Soft Starter 2000", "SS67890", "Siemens", "ATS48C21", "15-12-2024"),
        Equipamento("FFV5874WD", "Inversor de Frequência 5000", "IF12345", "Siemens", "Sinamics G120", "05-07-2020")
    };


    vector<Manutencao> manutencoes = {};


    // Criando uma instância do Sistema
    Sistema sistema;
    
    // Passando a lista de equipamentos para a instância do Sistema
    sistema.listarEquipamentos(equipamentos);  // Chamando o método listarEquipamentos
    
    
        //CASOS DE USO//

    // Caso de uso 01 - Registrar Manutenção
    sistema.filtrarEquipamentos(equipamentos, "Soft Starter 1000");
    
    sistema.selecionarEquipamento(equipamentos, "ATS48D62Y");
    
    sistema.registrarManutencao(manutencoes,"RM1", "21/20", "muitotrabalho", "peça1", "cateogria", "muitourgente", "campo mourao");
    // Caso de uso 02 - Alterar status de manutenção

    sistema.listarManutencao(manutencoes);

    sistema.selecionarManutencao(manutencoes,"RM1");

    sistema.alterarStatusManutencao(manutencoes[0], "novoStatus", "maringa");

    // Caso de uso 03 - Consultar manutenção

    sistema.listarManutencao(manutencoes);

    sistema.selecionarManutencao(manutencoes,"RM1");

    sistema.listarUmaManutencao(manutencoes[0]);
    
    return 0;
}
