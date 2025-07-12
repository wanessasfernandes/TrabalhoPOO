#ifndef LISTA_NAO_ORDENADA_H
#define LISTA_NAO_ORDENADA_H

#include "Elemento.h"

class ListaNaoOrdenada {
private:
    Elemento** elementos;
    int capacidade;
    int tamanho;

public:
    ListaNaoOrdenada(int capacidade = 100);
    ~ListaNaoOrdenada();

    bool InserirNoInicio(Elemento* e);       // O(n)
    bool InserirNoFinal(Elemento* e);        // O(1)
    bool RemoverPrimeiro();                  // O(n)
    bool RemoverUltimo();                    // O(1)
    bool RemoverPeloId(int id);              // O(n)
    int BuscarPeloId(int id) const;          // O(n)
    bool AlterarPeloId(int id, Elemento* novo); // O(n)
    void Imprimir() const;
};

#endif
