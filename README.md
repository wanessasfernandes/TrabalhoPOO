# Projeto de Estruturas de Dados com Programação Orientada a Objetos (C++)

## 1. Introdução

Este trabalho, realizado para a disciplina de **Algoritmos e Estruturas de Dados**, teve como objetivo central aplicar os pilares da **Programação Orientada a Objetos (POO)** na implementação de estruturas clássicas de dados utilizando **C++**. O projeto foi dividido em três partes principais, organizadas conforme o nível de dificuldade e distribuídas entre os membros do grupo.

Ao longo da execução, buscou-se não apenas a implementação funcional das estruturas, mas também a **análise da complexidade computacional** das operações realizadas.

---

## 2. Divisão de Tarefas e Análise de Complexidade

### 🔹 Tarefa 1 – Classes Base *(Dificuldade: Simples)*  
**Responsável:** Gabriel Rodrigues Saar

Criação das fundações do projeto:

- **Classe abstrata `Elemento`**:
Serve como base polimórfica para todas as estruturas futuras. 
  - Atributo protegido: `id` (chave primária).
  - Método `getID()` para acesso ao identificador.
  - Método virtual puro `imprimirInfo()`.
    

- **Classes derivadas concretas**:
  - `Pessoa`: atributos como `nome` e `salário`, com métodos `deposito()` e `saque()`.
  - `Maquina`: atributos `nome` e `status de atividade`, com método `alterar_atividade()`.

- **Testes na função `main()`**.

---

### 🔹 Tarefa 2 – Estruturas Sequenciais (Alocação Estática) *(Dificuldade: Média)*  
**Responsáveis:** Maria Eduarda e Wanessa

#### ✅ Lista Não Ordenada
- Métodos: `InserirNoInicio`, `InserirNoFinal`, `RemoverPrimeiro`, `RemoverUltimo`, `RemoverPeloId`, `BuscarPeloId`, `AlterarPeloId`.
- Complexidade:
  - Inserções no início/fim: **O(1)**.
  - Buscas e remoções: **O(n)**.

#### ✅ Lista Ordenada
- Mesmos métodos da lista não ordenada.
- Mantém os elementos ordenados por `id`.
- Complexidade:
  - **Busca binária**: **O(log n)**.
  - Inserções/remoções: **O(n)** (para manter a ordem).

#### ✅ Pilhas e Filas Estáticas
- Implementadas com base em **listas não ordenadas**.
- Justificativa: manter a ordenação **não garantiria o funcionamento correto** de estruturas LIFO (pilha) ou FIFO (fila).
- Estruturas ordenadas adicionariam complexidade desnecessária.

---

### 🔹 Tarefa 3 – Estruturas Encadeadas e Árvores *(Dificuldade: Alta)*  
**Responsáveis:** David Rabelo Gabri, João Pedro Cabral e Marcelo Amaral

#### ✅ Listas Encadeadas
- Implementações:
  - `ListaSimplesmenteEncadeada`
  - `ListaDuplamenteEncadeada`
  - `ListaDuplamenteEncadeadaCircular`
- Operações implementadas: `inserirNoInicio`, `inserirNoFim`, `removerPeloId`, `buscarPeloId`
- Complexidade: **O(n)** nas operações de busca e remoção.

#### ✅ Pilhas e Filas Dinâmicas
- Utilizaram **listas duplamente encadeadas circulares** como base.
- Justificativa:
  - Facilidade no controle de ambas as pontas.
  - Inserções e remoções em **O(1)**.
  - Evita tratamento especial para casos de lista vazia ou cheia.

#### ✅ Árvore Binária de Busca (BST)
- Classe interna `No` encapsulada.
- Métodos implementados:
  - `inserir`, `buscarPeloId`, `removerPeloId`
  - Percursos: `emOrdem`, `preOrdem`, `posOrdem`
- Complexidade:
  - **O(log n)** em árvore balanceada.
  - **O(n)** no pior caso (árvore degenerada).

---

## 3. Considerações Finais

Nas estruturas de pilha e fila, as escolhas também foram guiadas por praticidade e eficiência:

- **Estruturas dinâmicas**: o uso de listas circulares se mostrou vantajoso nas pilhas e filas pela simplicidade e desempenho (**O(1)**).
- **Estruturas estáticas**: optamos por listas não ordenadas para garantir o comportamento correto das pilhas e filas, evitando complexidade desnecessária.

Essas decisões refletem o cuidado com a análise de complexidade e com a adequação das estruturas de dados às operações que elas devem executar.

---
## 4. Análise de Complexidade

As operações foram avaliadas quanto ao seu custo computacional nas diferentes implementações (estática e dinâmica), considerando inserções, remoções e buscas. A escolha entre listas ordenadas e não ordenadas, bem como o uso de listas circulares nas estruturas dinâmicas, foi motivada pela busca por maior eficiência e simplicidade.

Abaixo, apresentamos uma tabela resumo com as principais estruturas desenvolvidas e a complexidade esperada de suas operações:

| Estrutura                      | Inserção Início | Inserção Final | Remoção | Busca         | Observações                                                                 |
|-------------------------------|------------------|----------------|---------|---------------|------------------------------------------------------------------------------|
| **Lista Não Ordenada (Estática)** | O(1)             | O(1)           | O(n)    | O(n)          | Estrutura base simples. Ideal para uso em pilhas e filas estáticas.         |
| **Lista Ordenada (Estática)**     | O(n)             | O(n)           | O(n)    | O(log n)      | Mantém os elementos ordenados por ID; busca otimizada com algoritmo binário.|
| **Lista Encadeada Simples**       | O(1)             | O(n)           | O(n)    | O(n)          | Estrutura dinâmica linear.                                                  |
| **Lista Duplamente Encadeada**    | O(1)             | O(1)           | O(n)    | O(n)          | Inserção eficiente nas duas extremidades.                                   |
| **Lista Duplamente Encadeada Circular** | O(1)        | O(1)           | O(n)    | O(n)          | Ideal para pilhas e filas dinâmicas, elimina necessidade de casos especiais.|
| **Pilha Estática**                | O(1)             | —              | O(1)    | O(1) (Topo)   | Baseada em lista não ordenada.                                              |
| **Fila Estática**                 | —                | O(1)           | O(1)    | O(1) (Frente) | Baseada em lista não ordenada.                                              |
| **Pilha Dinâmica**               | O(1)             | —              | O(1)    | O(1) (Topo)   | Baseada em lista duplamente encadeada circular.                             |
| **Fila Dinâmica**                | —                | O(1)           | O(1)    | O(1) (Frente) | Baseada em lista duplamente encadeada circular.                             |
| **Árvore Binária de Busca (BST)**| O(log n)*        | —              | O(log n)*| O(log n)*    | Média: O(log n), Pior caso (desbalanceada): O(n).                           |

> *As complexidades da BST assumem que a árvore está balanceada.

---

Essa análise permitiu compreender os impactos das decisões de implementação sobre a eficiência do programa, favorecendo o uso de estruturas adaptadas ao comportamento esperado de cada tipo de dado.


## 5. Tecnologias Utilizadas

- Linguagem: **C++**
- Paradigma: **Programação Orientada a Objetos**
- Estruturas: listas estáticas, listas encadeadas, pilhas, filas, deque, árvores binárias de busca.

---

## 6. Membros

- **David Rabelo Gabri**
- **Gabriel Rodrigues Saar**
- **João Pedro Cabral**
- **Marcelo Amaral**
- **Maria Eduarda**
- **Wanessa Fernandes**


