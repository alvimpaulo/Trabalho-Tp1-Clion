//
// Created by paulo on 04-Sep-18.
//
#ifndef TRABALHO_1_CLION_IDENTIFICADOR_H
#define TRABALHO_1_CLION_IDENTIFICADOR_H

#include <regex>
#include <stdexcept>
#include <string>

/**
 * @brief Domínio que armazena o identificador do usuário.
 * @details Domínio que armazena o identifacador em String no formato XXXXX onde X é uma letra minúscula (a-z).
 */
class Identificador {
public:
    /**
     * @brief Atribui um novo valor ao identificador.
     * @details Testa o novo identificador contra o padrão e atribui um novo valor ao identificador em caso de sucesso ou lança uma exceção em caso de falha.
     * @param novoIdentificador Novo identificador a ser testado.
     */
    void setIdentificador(std::string identificador);

    /**
     * @brief Retorna o identificador.
     * @return
     */
    std::string getIdentificador() const{
        return identificador;
    }

private:
    std::string identificador;
    bool validar(std::string identificador);


};


#endif //TRABALHO_1_CLION_IDENTIFICADOR_H
