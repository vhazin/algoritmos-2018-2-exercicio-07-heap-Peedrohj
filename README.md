# algoritmos-2018-2-exercicio-07-heap-Peedrohj

Leia o enunciado do problema G para as definições sobre heaps. A seguir nós definimos a terminologia básica de heaps. Uma heap é uma árvore cujos nós internos tem, cada um, uma prioridade (definida por um número) sendo que a prioridade de cada nó interno é menor que a prioridade de seu nó-pai. Como consequência, a rais será o nó de maior prioridade da árvore. Isso é uma das razões pelas quais heaps podem comumente ser usadas para a implemantação de filas de prioridade e para ordenações.

Uma árvore binária na qual cada nó interno tem ambos um rótulo e uma prioridade, e é tanto uma arvore binária de busca com atenção para rótulos; quanto uma fila com atenção para prioridades, é chamada de treap(árvore-heap). A sua tarefa é: Dado um conjunto de pares de rótulos e prioridades, com rótulos únicos e prioridades únicas, construir uma treap com essas informações.

## Entrada

A entrada contém vários casos de teste. Cada caso de teste começa com um inteiro n. Você pode assumir que 1≤ n ≤ 50000. Então segue n pares de strings e números rótulo1/prioridade1 , ... , rótulon/prioridaden. As strings são não-nulas e em caixa-baixa, e os números são inteiros não-negativos. O último caso de teste é seguido por um zero.

## Saída

Cada linha de cada caso de teste deve conter uma treap com os nós especificados. Uma treap é impressa como (<Sub-treap da Esquerda><Rótulo>/<Prioridade><Sub-treap da Direita>) As sub-treaps são impressas recursivamente e omitidas se forem folhas.
