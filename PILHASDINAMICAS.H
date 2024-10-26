#ifndef PILHASDINAMICAS_H
#define PILHASDINAMICAS_H

typedef struct ItemPilha {
    // Item
} ItemPilha;

typedef struct CelulaPilha {
    ItemPilha I;
    CelulaPilha *Prox;
} CelulaPilha;

typedef struct Pilha {
    CelulaPilha *Topo;
    CelulaPilha *Fundo;
} Pilha;

// FUNCOES
// Verifica se a pilha esta vazia
int VPVazia(Pilha P) {
    return (P.Fundo == P.Topo);
}
// Faz uma pilha vazia
void FPVazia(Pilha *P) {
    if(VPVazia(*P)) {
        printf("A pilha ja foi criada\n");
    } else {
        P->Fundo = (CelulaPilha *)malloc(sizeof(CelulaPilha));
        P->Fundo->Prox = NULL;
        P->Topo = P->Fundo;
    }
}
// Empilha um item na pilha
void Empilha(Pilha *P, ItemPilha I) {
    CelulaPilha *aux = (CelulaPilha *)malloc(sizeof(CelulaPilha));
    // Insere o item na pilha e a organiza
    aux->I = I;
    aux->Prox = P->Topo;
    P->Topo = aux;
}
// Desempilha um item da pilha
void Desempilha(Pilha *P, ItemPilha *I) {
    CelulaPilha *aux = P->Topo;
    // Remove um item da pilha e a organiza
    *I = P->Topo->I;
    P->Topo = P->Topo->Prox;
    free(aux);
}

#endif//PILHASDINAMICAS_H