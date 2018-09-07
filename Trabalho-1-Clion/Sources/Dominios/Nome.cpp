//
// Created by paulo on 04-Sep-18.
//

// codigo para a validação: (( (?! ))|(\b\.)|(\w)){15}
// https://regexr.com/3uum7

#include "../../Headers/Dominios/Nome.h"

Nome::Nome() {
    nome = "NomeNaoDefinido";
}

void Nome::setNome(std::string novoNome) throw(std::invalid_argument){
    std::regex nomeRegex(R"((( (?! ))|(\b\.)|(\w)){15})");
    std::smatch results;

    if(std::regex_match(novoNome, nomeRegex)){
        nome = novoNome;
    } else{
        throw (std::invalid_argument("Nome Invalido"));
    }

}

std::string Nome::getNome() {
    return nome;
}