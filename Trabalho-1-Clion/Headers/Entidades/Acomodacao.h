//
// Created by oetch on 16/09/2018.
//
#ifndef TRABALHO_1_CLION_ACOMODACAO_H
#define TRABALHO_1_CLION_ACOMODACAO_H

#include "../../Headers/Dominios/Identificador.h"
#include "../../Headers/Dominios/Tipo_Acomodacao.h"
#include "../Dominios/Capacidade_De_Acomodacao.h"
#include "../../Headers/Dominios/Data.h"
#include "../../Headers/Dominios/Nome.h"
#include "../../Headers/Dominios/Estado.h"
#include "../../Headers/Dominios/Diaria.h"

/**
 * @brief Entidade que armazena uma acomodação.
 * @brief Entidade que armazena uma acomodação.
 */
class Acomodacao{
public:
    /**
     * @brief Construtor da classe.
     * @details Quando uma instância dessa classe for criada, será armazenado um valor padrão de suas variáveis.
     */
    Acomodacao():identificador(),tipo(),capacidade(),dataInicio(),dataTermino(),cidade(),estado(),diaria(){}

    /**
     * @brief Atribui o identificador da acomodação.
     * @details Atribui o identificador da acomodação.
     * @param identificador Identificador que será atribuído.
     */
    void setIdentificador(Identificador &identificador){
        this->identificador = identificador;
    }
    /**
     * @brief Retorna o número do identificador da acomodação.
     * @return Identificador contendo o número do identificador da acomodação.
     */
    Identificador getIdentificador() const{
        return identificador;
    }

    /**
     * @brief Atribui o tipo da acomodação.
     * @details Atribui o tipo da acomodação.
     * @param tipo Tipo_Acomodacao que será atribuído.
     */
    void setTipo(Tipo_Acomodacao &tipo){
        this->tipo = tipo;
    }
    /**
     * @brief Retorna o tipo da acomodação.
     * @return Tipo_Acomodacao contendo o tipo da acomodação.
     */
    Tipo_Acomodacao getTipo() const{
        return tipo;
    }

    /**
     * @brief Atribui a capacidade da acomodação.
     * @details Atribui a capacidade da acomodação.
     * @param capacidade Capacidade_De_Acomodacao que será atribuída.
     */
    void setCapacidade(Capacidade_De_Acomodacao &capacidade){
        this->capacidade = capacidade;
    }
    /**
     * @brief Retorna a capacidade da acomodação.
     * @return Capacidade_De_Acomodacao contendo a capacidade de acomodação.
     */
    Capacidade_De_Acomodacao getCapacidade() const{
        return capacidade;
    }

    /**
     * @brief Atribui a data de início de locação da acomodação.
     * @details Atribui a data de início de locação da acomodação.
     * @param dataInicio Data que contém a data de início a ser atribuída.
     */
    void setDataInicio(Data &dataInicio){
        this->dataInicio = dataInicio;
    }
    /**
     * @brief Retorna a data de início de locação da acomodação.
     * @return Data contendo a data de início de locação da acomodação.
     */
    Data getDataInicio() const{
        return dataInicio;
    }

    /**
     * @brief Atribui a data de término de locação da acomodação.
     * @details Atribui a data de término de locação da acomodação.
     * @param dataTermino Data que contém a data de término a ser atribuída.
     */
    void setDataTermino(Data &dataTermino){
        this->dataTermino = dataTermino;
    }
    /**
     * @brief Retorna a data de término de locação da acomodação.
     * @return Data contendo a data de término de locação da acomodação.
     */
    Data getDataTermino() const{
        return dataTermino;
    }

    /**
     * @brief Atribui o nome da cidade onde a acomodação é localizada.
     * @details Atribui o nome da cidade onde a acomodação é localizada.
     * @param cidade Nome que contém o nome da cidade a ser atribuído.
     */
    void setCidade(Nome &cidade){
        this->cidade = cidade;
    }
    /**
     * @brief Retorna o nome da cidade onde a acomodação é localizada.
     * @return Nome contendo o nome da cidade onde a acomodação é localizada.
     */
    Nome getCidade() const{
        return cidade;
    }

    /**
     * @brief Atribui o estado onde a acomodação é localizada.
     * @details Atribui o estado  onde a acomodação é localizada.
     * @param estado Estado que contém a sigla do estado a ser atribuída.
     */
    void setEstado(Estado &estado){
        this->estado = estado;
    }
    /**
     * @brief Retorna a sigla do estado onde a acomodação é localizada.
     * @return Estado contendo a sigla do estado onde a acomodação é localizada.
     */
    Estado getEstado() const{
        return estado;
    }

    /**
     * @brief Atribui o diária da acomodação.
     * @details Atribui o diária da acomodação.
     * @param diaria Diaria que contém o valor da diária a ser atribuída.
     */
    void setDiaria(Diaria &diaria){
        this->diaria = diaria;
    }
    /**
     * @brief Retorna a diária da acomodação.
     * @return Diaria contendo a diária da acomodação.
     */
    Diaria getDiaria() const{
        return diaria;
    }

protected:
private:
    Identificador identificador;
    Tipo_Acomodacao tipo;
    Capacidade_De_Acomodacao capacidade;
    Data dataInicio;
    Data dataTermino;
    Nome cidade;
    Estado estado;
    Diaria diaria;
};


#endif //TRABALHO_1_CLION_ACOMODACAO_H
