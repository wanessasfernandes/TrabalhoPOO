#include <iostream>
#include <string>
#include "Elemento.h"
#include "Pessoa.h"
#include "Maquina.h"
#include "ListaNaoOrdenada.h"
#include "ListaOrdenada.h"

using namespace std;

void menuListaNaoOrdenada() {
    ListaNaoOrdenada lista;
    int opcao;
    
    do {
        cout << "\n=== MENU LISTA NAO ORDENADA ===" << endl;
        cout << "1. Inserir Pessoa no inicio" << endl;
        cout << "2. Inserir Maquina no inicio" << endl;
        cout << "3. Inserir Pessoa no final" << endl;
        cout << "4. Inserir Maquina no final" << endl;
        cout << "5. Remover primeiro" << endl;
        cout << "6. Remover ultimo" << endl;
        cout << "7. Remover por ID" << endl;
        cout << "8. Buscar por ID" << endl;
        cout << "9. Alterar por ID" << endl;
        cout << "10. Imprimir lista" << endl;
        cout << "0. Sair" << endl;
        cout << "Opcao: ";
        cin >> opcao;
        
        if (opcao == 1 || opcao == 3) {
            int id;
            string nome;
            float salario;
            cout << "ID: ";
            cin >> id;
            cout << "Nome: ";
            cin.ignore();
            getline(cin, nome);
            cout << "Salario: ";
            cin >> salario;
            
            Pessoa* p = new Pessoa(id, nome, salario);
            if (opcao == 1) lista.InserirNoInicio(p);
            else lista.InserirNoFinal(p);
        }
        else if (opcao == 2 || opcao == 4) {
            int id, ativo;
            string nome;
            cout << "ID: ";
            cin >> id;
            cout << "Nome: ";
            cin.ignore();
            getline(cin, nome);
            cout << "Ativa (1-Sim/0-Nao): ";
            cin >> ativo;
            
            Maquina* m = new Maquina(id, nome, ativo == 1);
            if (opcao == 2) lista.InserirNoInicio(m);
            else lista.InserirNoFinal(m);
        }
        else if (opcao == 5) {
            lista.RemoverPrimeiro();
        }
        else if (opcao == 6) {
            lista.RemoverUltimo();
        }
        else if (opcao == 7) {
            int id;
            cout << "ID para remover: ";
            cin >> id;
            lista.RemoverPeloId(id);
        }
        else if (opcao == 8) {
            int id;
            cout << "ID para buscar: ";
            cin >> id;
            elemento* e = lista.BuscarPeloId(id);
            if (e) {
                e->apresentar();
            }
        }
        else if (opcao == 9) {
            int id, tipo;
            cout << "ID para alterar: ";
            cin >> id;
            elemento* atual = lista.BuscarPeloId(id);
            if (!atual) continue;
            
            cout << "Novo tipo (1-Pessoa, 2-Maquina): ";
            cin >> tipo;
            if (tipo == 1) {
                string nome;
                float salario;
                cout << "Novo nome: ";
                cin.ignore();
                getline(cin, nome);
                cout << "Novo salario: ";
                cin >> salario;
                lista.AlterarPeloId(id, new Pessoa(id, nome, salario));
            }
            else {
                string nome;
                int ativo;
                cout << "Novo nome: ";
                cin.ignore();
                getline(cin, nome);
                cout << "Ativa (1-Sim/0-Nao): ";
                cin >> ativo;
                lista.AlterarPeloId(id, new Maquina(id, nome, ativo == 1));
            }
        }
        else if (opcao == 10) {
            lista.Imprimir();
        }
    } while (opcao != 0);
}

void menuListaOrdenada() {
    ListaOrdenada lista;
    int opcao;
    
    do {
        cout << "\n=== MENU LISTA ORDENADA ===" << endl;
        cout << "1. Inserir Pessoa" << endl;
        cout << "2. Inserir Maquina" << endl;
        cout << "3. Remover primeiro" << endl;
        cout << "4. Remover ultimo" << endl;
        cout << "5. Remover por ID" << endl;
        cout << "6. Buscar por ID" << endl;
        cout << "7. Alterar por ID" << endl;
        cout << "8. Imprimir lista" << endl;
        cout << "0. Sair" << endl;
        cout << "Opcao: ";
        cin >> opcao;
        
        if (opcao == 1) {
            int id;
            string nome;
            float salario;
            cout << "ID: ";
            cin >> id;
            cout << "Nome: ";
            cin.ignore();
            getline(cin, nome);
            cout << "Salario: ";
            cin >> salario;
            
            lista.InserirOrdenado(new Pessoa(id, nome, salario));
        }
        else if (opcao == 2) {
            int id, ativo;
            string nome;
            cout << "ID: ";
            cin >> id;
            cout << "Nome: ";
            cin.ignore();
            getline(cin, nome);
            cout << "Ativa (1-Sim/0-Nao): ";
            cin >> ativo;
            
            lista.InserirOrdenado(new Maquina(id, nome, ativo == 1));
        }
        else if (opcao == 3) {
            lista.RemoverPrimeiro();
        }
        else if (opcao == 4) {
            lista.RemoverUltimo();
        }
        else if (opcao == 5) {
            int id;
            cout << "ID para remover: ";
            cin >> id;
            lista.RemoverPeloId(id);
        }
        else if (opcao == 6) {
            int id;
            cout << "ID para buscar: ";
            cin >> id;
            elemento* e = lista.BuscarPeloId(id);
            if (e) {
                e->apresentar();
            }
        }
        else if (opcao == 7) {
            int id, tipo;
            cout << "ID para alterar: ";
            cin >> id;
            elemento* atual = lista.BuscarPeloId(id);
            if (!atual) continue;
            
            cout << "Novo tipo (1-Pessoa, 2-Maquina): ";
            cin >> tipo;
            if (tipo == 1) {
                string nome;
                float salario;
                cout << "Novo nome: ";
                cin.ignore();
                getline(cin, nome);
                cout << "Novo salario: ";
                cin >> salario;
                lista.AlterarPeloId(id, new Pessoa(id, nome, salario));
            }
            else {
                string nome;
                int ativo;
                cout << "Novo nome: ";
                cin.ignore();
                getline(cin, nome);
                cout << "Ativa (1-Sim/0-Nao): ";
                cin >> ativo;
                lista.AlterarPeloId(id, new Maquina(id, nome, ativo == 1));
            }
        }
        else if (opcao == 8) {
            lista.Imprimir();
        }
    } while (opcao != 0);
}

int main() {
    int opcao;
    
    do {
        cout << "\n=== MENU PRINCIPAL ===" << endl;
        cout << "1. Testar Lista Nao Ordenada" << endl;
        cout << "2. Testar Lista Ordenada" << endl;
        cout << "0. Sair" << endl;
        cout << "Opcao: ";
        cin >> opcao;
        
        if (opcao == 1) menuListaNaoOrdenada();
        else if (opcao == 2) menuListaOrdenada();
    } while (opcao != 0);
    
    return 0;
}