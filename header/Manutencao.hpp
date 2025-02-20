#ifndef MANUTENCAO_HPP
#define MANUTENCAO_HPP

#include <string>
#include <vector>
using namespace std;

class Manutencao{

    private:
        string rm; 
        string data;
        string descricao_de_servico;
        string pecas;
        string categoria;
        string status;
        string localizacao;


    public:
        Manutencao(const string& _rm, const string& _data, const string& _descricao_de_servico, const string& _pecas, const string& _categoria, const string& _status, const string& _localizacao);

        
        void setStatus(const std::string& novoStatus);
        void setLocalizacao(const std::string& novaLocalizacao);
    
        string getRm() const;
        string getData() const;
        string getDescricaoDeServico() const;
        string getPecas() const;
        string getCategoria() const;
        string getStatus() const;
        string getLocalizacao() const;
};

#endif 
