#ifndef FILASDINAMICAS_H
#define FILASDINAMICAS_H

typedef struct ItemFila {
    char *Decimal;
    char Sinal;
    char *Binario;
} ItemFila;

typedef struct CelulaFila {
    Item I;
    Celula *Prox;
} CelulaFila;

typedef struct Fila {
    CelulaFila *Frente;
    CelulaFila *Tras;
} Fila;

// FUNCOES
// Faz uma lista vazia
int VFVazia(Fila F) {
    return (F.Frente == F.Tras);
}
// Cria uma lista vazia
void FFVazia(Fila *F) {
    if(VFVazia(*F)) {
       printf("A lista ja foi criada\n")  ; 
    } else {
        F->Frente = (CelulaFila *)malloc(sizeof(CelulaFila));
        F->Tras = F->Frente;
        F->Frente->Prox = NULL; 
    }
}
//Enfileira um item na fila
void Enfileira(Fila *F, ItemFila I) {
    CelulaFila *aux = (CelulaFila *)malloc(sizeof(CelulaFila));
    // Recebe o item e organiza a fila
    aux->I = I;
    aux->Prox = F->Frente->Prox;
    F->Frente->Prox = aux;
}
// Desenfileira um item da fila
void Desenfileira(Fila *F, ItemFila *I) {
    CelulaFila *aux = F->Frente;
    // Remove o item e organiza a fila
    *I = F->Frente->Prox->I;
    F->Frente = F->Frente->Prox;
    free(aux);
}

#endif//FILASDINAMICAS_H