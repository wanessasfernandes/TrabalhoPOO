#include <iostream>
#include <string.h>
#include <limits>
#include "elemento.h"
#include "Pessoa.h"
#include "Maquina.h"
#include "ListaNaoOrdenada.h"


using namespace std;

int main(){
	int option;
	int operacao;
	ListaNaoOrdenada lista;

	cout << "DIgite 1 para tratar o objeto pessoa, Digite 2 para tratar o objeto maquina" << endl;
	cout << "[3] - Lsita Nao Ordenada\n" << endl;
	cin >> option;

	if( option == 1){
		
		Pessoa kleber(125,"Kleber Joao", 124.50);
		kleber.apresentar();
		kleber.deposito(120.05);
		kleber.apresentar();
	}

	else if (option == 3){
		do {
            cout << "\n====== MENU LISTA NÃO ORDENADA ======\n";
            cout << "1 - Inserir Pessoa\n";
            cout << "2 - Inserir Maquina\n";
            cout << "3 - Remover pelo ID\n";
            cout << "4 - Buscar pelo ID\n";
            cout << "5 - Alterar pelo ID\n";
            cout << "6 - Imprimir lista\n";
            cout << "0 - Sair\n";
            cout << "Escolha: ";
            cin >> operacao;

            if (operacao == 1) {
                int id;
                string nome;
                double saldo;
                cout << "ID da pessoa: ";
                cin >> id;
                cin.ignore();
                cout << "Nome: ";
                getline(cin, nome);
                cout << "Saldo: ";
                cin >> saldo;
                lista.InserirNoFinal(new Pessoa(id, nome, saldo));
            }

            else if (operacao == 2) {
                int id;
                string nome;
                int ativo;
                cout << "ID da maquina (IP): ";
                cin >> id;
                cin.ignore();
                cout << "Nome da maquina: ";
                getline(cin, nome);
                cout << "Ativa? (1 = sim / 0 = não): ";
                cin >> ativo;
                lista.InserirNoFinal(new Maquina(id, nome, ativo == 1));
            }

            else if (operacao == 3) {
                int id;
                cout << "ID a remover: ";
                cin >> id;
                lista.RemoverPeloId(id);
            }

            else if (operacao == 4) {
                int id;
                cout << "ID a buscar: ";
                cin >> id;
                Elemento* e = lista.BuscarPeloId(id);
                if (e)
                    e->imprimirInfo();
                else
                    cout << "Elemento não encontrado.\n";
            }

            else if (operacao == 5) {
                int id;
                cout << "ID a alterar: ";
                cin >> id;
                Elemento* atual = lista.BuscarPeloId(id);
                if (!atual) {
                    cout << "ID não encontrado.\n";
                    continue;
                }

                int tipo;
                cout << "Tipo novo (1 = Pessoa, 2 = Maquina): ";
                cin >> tipo;
                if (tipo == 1) {
                    string nome;
                    double saldo;
                    cin.ignore();
                    cout << "Novo nome: ";
                    getline(cin, nome);
                    cout << "Novo saldo: ";
                    cin >> saldo;
                    lista.AlterarPeloId(id, new Pessoa(id, nome, saldo));
                } else {
                    string nome;
                    int ativo;
                    cin.ignore();
                    cout << "Novo nome da maquina: ";
                    getline(cin, nome);
                    cout << "Está ativa? (1 = sim / 0 = não): ";
                    cin >> ativo;
                    lista.AlterarPeloId(id, new Maquina(id, nome, ativo == 1));
                }
            }

            else if (operacao == 6) {
                lista.ImprimirTodos();
            }

        } while (operacao != 0);
	}
	/* else{
		int IP;
		string nome;
		bool atividade;
		int situation;
		cout << "Digite o Ip da maquina" << endl;
		cin >> IP;
		cout << " Digite o nome da maquina" << endl;
		cin.clear();
		cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		getline(cin,nome);	
		cout << "Digite 1 se a maquina estiver ativa e 2 caso a maquina esteja desativada" << endl;
		cin >> situation;
		if(situation == 1){
			atividade = true;
		}
		else{
			atividade = false;
		}
		Maquina CPU(IP,nome,atividade);
		CPU.apresentar();
		cout << "Digite 1 se deseja alterar a atividade do pc" << endl;
		cin >> option;
		if(option == 1){
			
			CPU.alterar_atividade();
			CPU.apresentar();
		} 
	} */

	return 0;
}
