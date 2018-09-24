//
// Created by oetch on 16/09/2018.
//

#ifndef TRABALHO_1_CLION_CARTAO_DE_CREDITO_H
#define TRABALHO_1_CLION_CARTAO_DE_CREDITO_H

#include "../../Headers/Dominios/Num_Cartao_Credito.h"
#include "../../Headers/Dominios/Data_De_Validade.h"


class Cartao_De_Credito {
public:
    Cartao_De_Credito();

    void setNumero(Num_Cartao_Credito numero);
    Num_Cartao_Credito getNumero() const{
        return numero;
    }

    void setDataDeValidade(Data_De_Validade dataDeValidade);
    Data_De_Validade getDataDeValidade() const{
        return dataDeValidade;
    }

protected:
private:
    Num_Cartao_Credito numero;
    Data_De_Validade dataDeValidade;
};


#endif //TRABALHO_1_CLION_CARTAO_DE_CREDITO_H
