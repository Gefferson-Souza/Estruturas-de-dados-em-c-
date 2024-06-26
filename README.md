# Estudo de estruturas de dados em c++

Este repositório é um espaço dedicado ao aprendizado e prática de estruturas de dados usando a linguagem C++. É ideal para quem deseja entender como armazenar e gerenciar dados de maneira eficiente em C++.

## Vetores

Vetores são uma das estruturas de dados fundamentais em C++. Eles permitem armazenar e acessar uma sequência de elementos de forma eficiente. Diferentemente dos arrays tradicionais, os vetores da biblioteca padrão (`std::vector`) são dinâmicos e podem se redimensionar automaticamente quando elementos são adicionados ou removidos.

### Características dos Vetores:

- **Dinâmicos**: Se ajustam automaticamente em tamanho.
- **Contíguos**: Armazenam elementos em sequência na memória.
- **Acesso Aleatório**: Permitem acesso direto a qualquer elemento através de um índice.
- **Flexíveis**: Facilitam a inserção e remoção de elementos.

## Pilhas

Pilhas são uma estrutura de dados essencial em C++ que operam sob o princípio **LIFO** (_Last In, First Out_ - Último a Entrar, Primeiro a Sair). Isso significa que o último elemento adicionado é o primeiro a ser removido.

A biblioteca padrão de C++ (`std::stack`) oferece uma implementação robusta de pilha que é versátil para armazenar qualquer tipo de dado.

### Características das Pilhas:

- **LIFO**: Operam pelo princípio _Last In, First Out_.
- **Acesso Restrito**: Somente o elemento no topo é acessível e removível.
- **Operações Principais**:
  - `push`: Adiciona um elemento ao topo.
  - `pop`: Remove o elemento do topo.
  - `top`: Acessa o elemento do topo sem removê-lo.
- **Uso Comum**: Ideal para situações que exigem a reversão de sequências de operações ou para resolver problemas que envolvem recursividade.

## Filas

Filas são uma estrutura de dados fundamental em C++ que operam sob o princípio **FIFO** (_First In, First Out_ - Primeiro a Entrar, Primeiro a Sair). Isso significa que o primeiro elemento adicionado é o primeiro a ser removido.

A implementação de fila apresentada aqui é uma fila circular, que utiliza a aritmética modular para tratar o final da fila como se fosse conectado ao início.

### Características das Filas:

- **FIFO**: Operam pelo princípio _First In, First Out_.
- **Acesso Restrito**: Somente o elemento na frente é acessível e removível.
- **Operações Principais**:
  - `enqueue`: Adiciona um elemento ao final.
  - `dequeue`: Remove o elemento da frente.
- **Uso Comum**: Ideal para situações que exigem a manutenção da ordem original dos elementos.