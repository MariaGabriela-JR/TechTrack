#include "header/Sistema.hpp"
#include "header/Cliente.hpp"
#include "header/Equipamento.hpp"
#include "header/Manutencao.hpp"

int main() {

    ///// CLIENTES BANCO DE DADOS /////

    Cliente cliente01 (001, "Incopisos", "INCOPISOS INDUSTRIA E COMERCIO DE PISOS LTDA", "55.254.825/0002-05", "Estrada Jose Horacio Pascon, Santa Gertrudes - SP", "+55 19 35458660", "marketing@incopisos.com.br", "Produção de placas cerâmicas");
    Cliente cliente02 (002, "Majopar", "CERÂMICA MAJOPAR LTDA", "64.700.735/0002-91", "Estrada José Horácio Pascon, Distrito Industrial e Comercial I, Santa Gertrudes - SP", "+55 19 35458700", " ", "Produção de placas cerâmicas");
    Cliente cliente03 (003, "Formigres", "CERÂMICA FORMIGRES LTDA", "54.431.591/0001-80", "Rodovia Washington Luiz, KM 164, Santa Gertrudes - SP", "+55 19 35458880", "contato@formigres.com.br", "Produção de placas cerâmicas");
    
    ///// EQUIPAMENTOS BANCO DE DADOS /////

    Equipamento equipamento01 ("ATS48D62Y", "Soft Starter 1000", "SS123", "Schneider", "3RW3036", "10-05-2019");
    Equipamento equipamento02 ("FRS585H6T", "Soft Starter 2000", "SS67890", "Siemens", "ATS48C21", "15-12-2024");
    Equipamento equipamento03 ("FFV5874WD", "Inversor de Frequência 5000", "IF12345", "Siemens", "Sinamics G120", "05-07-2020");

    return 0;
}
