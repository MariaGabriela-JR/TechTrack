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

    ///// MANUTENÇÕES BANCO DE DADOS /////
        Manutencao manutencao01("ID0111", "12-03-2020", "troca de pecas", "painel soft starter", "urgente", "laudo aprovado", "sala 02, prateleira B5");
        Manutencao manutencao02("ID0112", "15-06-2021", "lavagem e remontagem", " ", "sem urgencia", "laudo arovado", "Sala 02, prateleira E3");
        Manutencao manutencao03("ID0113", "30-03-2022", "Limpeza", " ", "sem urgencia", "Aguardando aprovacao de laudo", "sala temporaria");


    vector<Manutencao> manutencoes = {};

    Sistema sistema;
    
    sistema.listarEquipamentos(equipamentos); 
    
    
    // CASOS DE USO //

    // Caso de uso 01 - Registrar Manutenção

    sistema.filtrarEquipamentos(equipamentos, "Soft Starter 1000");
    sistema.selecionarEquipamento(equipamentos, "ATS48D62Y");
    sistema.registrarManutencao(manutencoes,"RM1", "21/20", "muitotrabalho", "peça1", "cateogria", "muitourgente", "campo mourao");

    // Caso de uso 02 - Alterar status de manutenção

    sistema.listarManutencao(manutencoes);
    sistema.filtrarManutencao(manutencoes, "ID0111");
    sistema.selecionarManutencao(manutencoes, "ID0111");
    sistema.alterarStatusManutencao(manutencao01, "em teste", "sala de testes");

    // Caso de uso 03 - Consultar manutenção

    sistema.listarManutencao(manutencoes);
    sistema.filtrarManutencao(manutencoes, "ID0113");
    sistema.selecionarManutencao(manutencoes, "ID0113");

    
    return 0;
}
