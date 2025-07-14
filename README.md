# Projeto de Estruturas de Dados com Programação Orientada a Objetos (C++)

## 1. Introdução

Este trabalho, realizado para a disciplina de **Algoritmos e Estruturas de Dados**, teve como objetivo central aplicar os pilares da **Programação Orientada a Objetos (POO)** na implementação de estruturas clássicas de dados utilizando **C++**. O projeto foi dividido em três partes principais, organizadas conforme o nível de dificuldade e distribuídas entre os membros do grupo.

Ao longo da execução, buscou-se não apenas a implementação funcional das estruturas, mas também a **análise da complexidade computacional** das operações realizadas, além da **avaliação de alternativas de projeto** e **boas práticas de reuso e modularização de código**.

---

## 2. Divisão de Tarefas e Análise de Complexidade

### 🔹 Tarefa 1 – Classes Base *(Dificuldade Simples)*  
**Responsável:** Gabriel Rodrigues Saar

Criação das fundações do projeto:

- **Classe abstrata `Elemento`**:
  - Atributo protegido: `id` (chave primária).
  - Método `getID()` para acesso ao identificador.
  - Método virtual puro `imprimirInfo()`.

- **Classes derivadas concretas**:
  - `Pessoa`: atributos como `nome` e `salário`, com métodos `deposito()` e `saque()`.
  - `Maquina`: atributos `nome` e `status de atividade`, com método `alterar_atividade()`.

- **Testes na função `main()`** garantiram o funcionamento inicial.

---

### 🔹 Tarefa 2 – Estruturas Sequenciais (Alocação Estática) *(Complexidade Média)*  
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

### 🔹 Tarefa 3 – Estruturas Encadeadas e Árvores *(Complexidade Alta)*  
**Responsáveis:** David Gabri, João Pedro Cabral e Marcelo Amaral

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

Durante o desenvolvimento, priorizamos clareza, eficiência e organização. No entanto, identificamos pontos que poderiam ser aprimorados:

- **Hierarquia de listas**: implementar uma classe base `ListaBase` teria evitado repetição de código nas listas ordenada e não ordenada.
- **Estruturas dinâmicas**: o uso de listas circulares se mostrou vantajoso nas pilhas e filas pela simplicidade e desempenho (**O(1)**).
- **Estruturas estáticas**: optamos por listas não ordenadas para garantir o comportamento correto das pilhas e filas, evitando complexidade desnecessária.

---

## 4. Tecnologias Utilizadas

- Linguagem: **C++**
- Paradigma: **Programação Orientada a Objetos**
- Estruturas: listas estáticas, listas encadeadas, pilhas, filas, deque, árvores binárias de busca.

---

## 5. Autores

- **Gabriel Rodrigues Saar**
- **Maria Eduarda**
- **Wanessa Fernandes**
- **David Gabri**
- **João Pedro Cabral**
- **Marcelo Amaral**
