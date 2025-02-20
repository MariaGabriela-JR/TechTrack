#ifndef EQUIPAMENTO_HPP
#define EQUIPAMENTO_HPP

#include <string>

class Produto{

private:
    int id;
    string nome;
    int codigo_interno; 
    string fabricante;
    string modelo;
    string data_de_aquisicao;

public:
    Produto(const std::string& nome, double preco, int quantidade);

    // Métodos para acessar e definir os atributos
    void setNome(const std::string& nome);
    std::string getNome() const;

    void setPreco(double preco);
    double getPreco() const;

    void setQuantidade(int quantidade);
    int getQuantidade() const;
};

#endif 
