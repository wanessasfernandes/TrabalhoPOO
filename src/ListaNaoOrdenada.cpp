#include "ListaNaoOrdenada.h"
#include <iostream>
using namespace std;

ListaNaoOrdenada::ListaNaoOrdenada(int capacidade) {
    this->capacidade = capacidade;
    this->tamanho = 0;
    this->elementos = new Elemento*[capacidade];
}

ListaNaoOrdenada::~ListaNaoOrdenada() {
    for (int i = 0; i < tamanho; ++i)
        delete elementos[i];
    delete[] elementos;
}

bool ListaNaoOrdenada::InserirNoInicio(Elemento* e) {
    if (tamanho >= capacidade) return false;
    for (int i = tamanho; i > 0; --i)
        elementos[i] = elementos[i - 1];
    elementos[0] = e;
    tamanho++;
    return true;
}

bool ListaNaoOrdenada::InserirNoFinal(Elemento* e) {
    if (tamanho >= capacidade) return false;
    elementos[tamanho++] = e;
    return true;
}

bool ListaNaoOrdenada::RemoverPrimeiro() {
    if (tamanho == 0) return false;
    delete elementos[0];
    for (int i = 1; i < tamanho; ++i)
        elementos[i - 1] = elementos[i];
    tamanho--;
    return true;
}

bool ListaNaoOrdenada::RemoverUltimo() {
    if (tamanho == 0) return false;
    delete elementos[--tamanho];
    return true;
}

bool ListaNaoOrdenada::RemoverPeloId(int id) {
    int pos = BuscarPeloId(id);
    if (pos == -1) return false;
    delete elementos[pos];
    for (int i = pos + 1; i < tamanho; ++i)
        elementos[i - 1] = elementos[i];
    tamanho--;
    return true;
}

int ListaNaoOrdenada::BuscarPeloId(int id) const {
    for (int i = 0; i < tamanho; ++i) {
        if (elementos[i]->getID() == id)
            return i;
    }
    return -1;
}

bool ListaNaoOrdenada::AlterarPeloId(int id, Elemento* novo) {
    int pos = BuscarPeloId(id);
    if (pos == -1) return false;
    delete elementos[pos];
    elementos[pos] = novo;
    return true;
}

v
