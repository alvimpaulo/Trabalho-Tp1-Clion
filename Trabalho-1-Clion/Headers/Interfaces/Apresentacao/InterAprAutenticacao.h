//
// Created by paulo on 17-Nov-18.
//

#ifndef TRABALHO_1_CLION_INTERAPRAUTENTICACAO_H
#define TRABALHO_1_CLION_INTERAPRAUTENTICACAO_H


#include "../../Dominios/Identificador.h"
#include "../Servico/InterServAutenticacao.h"

class InterAprAutenticacao {
private:
protected:
public:
    virtual void autenticar(Identificador &identificador) = 0;
    virtual void setCntrsServAutenticacao(InterServAutenticacao *cntrServAutenticacao) = 0;
};


#endif //TRABALHO_1_CLION_INTERAPRAUTENTICACAO_H
