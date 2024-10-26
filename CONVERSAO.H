#ifndef CONVERSAO_H
#define CONVERSAO_H

#include "LISTASDINAMICAS.H"
#include "PILHASDINAMICAS.H"
#include "FILASDINAMICAS.H"

int Potencia(int n, int e) {
    if(e == 0){
        return 1;
    } else {
        return (n * Potencia(n,--e));
    }
}

#endif//CONVERSAO_H