//
// Created by paulo on 04-Sep-18.
//

#ifndef TRABALHO_1_CLION_NOME_H
#define TRABALHO_1_CLION_NOME_H

#include <regex>
#include <stdexcept>
#include <string>
#include <iostream>

class Nome {
public:
    Nome();
    void setNome(std::string) throw(std::invalid_argument);
    std::string getNome();

protected:
private:
    std::string nome;

};


#endif //TRABALHO_1_CLION_NOME_H