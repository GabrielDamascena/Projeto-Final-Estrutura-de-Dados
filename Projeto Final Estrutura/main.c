//Alunos: Gabriel Gonçalves Damascena e Kaique Freitas Santos
#include <stdio.h>
#include <stdlib.h>
#include "arvorebinaria.h"

int main() {
    TreeNode* root = NULL;

    // Inserção
    root = inserir(root, 50);
    root = inserir(root, 30);
    root = inserir(root, 20);
    root = inserir(root, 40);
    root = inserir(root, 70);
    root = inserir(root, 60);
    root = inserir(root, 80);

    // Teste de busca
    printf("Busca por 20: %s\n", buscar(root, 20) ? "Encontrado" : "Nao encontrado");
    printf("Busca por 90: %s\n", buscar(root, 90) ? "Encontrado" : "Nao encontrado");

    // Teste de remoção
    printf("Removendo 20\n");
    root = remover(root, 20);
    printf("Busca por 20: %s\n", buscar(root, 20) ? "Encontrado" : "Nao encontrado");

    // Percursos na árvore
    printf("Percorrendo em pre-ordem: ");
    percorrerPreOrdem(root);
    printf("\n");

    printf("Percorrendo em ordem simetrica: ");
    percorrerOrdemSimetrica(root);
    printf("\n");

    printf("Percorrendo em pos-ordem: ");
    percorrerPosOrdem(root);
    printf("\n");

    // Mínimo e Máximo
    printf("Valor minimo na arvore: %d\n", minimo(root));
    printf("Valor maximo na arvore: %d\n", maximo(root));

    // Liberar memória
    liberarArvore(root);

    return 0;
}