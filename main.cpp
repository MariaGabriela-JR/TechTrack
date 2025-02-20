#include "header/UI.hpp"
#include "header/Sistema.hpp"
#include "header/Cliente.hpp"
#include "header/Equipamento.hpp"
#include "header/Manutencao.hpp"

int main() {
    Sistema sistema;
    sistema.inicializar();
    
    UI ui;
    ui.menuInicial(sistema);
    
    return 0;
}
