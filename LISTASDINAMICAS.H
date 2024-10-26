#ifndef LISTASDINAMICAS_H
#define LISTASDINAMICAS_H

typedef struct ItemLista {
    // Item
} ItemLista;

typedef struct CelulaLista {
    ItemLista I;
    CelulaLista *Prox;
} CelulaLista;

typedef struct Lista {
    CelulaLista *Primeiro;
    CelulaLista *Ultimo;
} Lista;

// FUNCOES
// Verifica se a lista esta vazia
int VLVazia(Lista L) {
    return (L.Primeiro == L.Ultimo);
}
// Faz uma lista vazia
void FLVazia(Lista *L) {
    if(VLVazia(*L)) {
        printf("A lista ja foi criada\n");
    } else {
        L->Primeiro = (CelulaLista *)malloc(sizeof(CelulaLista));
        L->Ultimo = L->Primeiro;
        L->Ultimo->Prox = NULL;
    }
}
// Insere um item na lista
void Insere(Lista *L, CelulaLista *Posicao_Anterior, ItemLista I) {
    if(Posicao_Anterior == NULL) {
        printf("Nao eh possivel inserir um item nessa posicao\n");
    } else {
        CelulaLista *aux = (CelulaLista *)malloc(sizeof(CelulaLista));
        // Insere um item e organiza a lista
        aux->I = I;
        if (Posicao_Anterior == L->Ultimo) {
            aux->Prox = L->Ultimo->Prox;
            L->Ultimo = aux;
        } else {
            aux->Prox = Posicao_Anterior->Prox;
            Posicao_Anterior->Prox = aux;
        }
    }
}
// Remove um item da lista
void Remove(Lista *L, CelulaLista *Posicao_Anterior, ItemLista *I) {
    if(Posicao_Anterior == L->Ultimo || Posicao_Anterior == NULL) {
        printf("Nao eh possivel remover este item\n");
    } else {
        CelulaLista *aux = Posicao_Anterior->Prox;
        // Remove um item e organiza a lista
        *I = aux->I;
        aux->Prox = Posicao_Anterior->Prox;
        Posicao_Anterior->Prox = aux;
    }
}

#endif//LISTASDINAMICAS_H