#include "library.h"
#include <stdio.h>
#include <malloc.h>


Lista *cria_lista() {
    Lista *li;
    li = (Lista *)malloc(sizeof(Lista));
    if (li != NULL)
        li->qtd = 0;
    return li;
}

Lista *libera_lista(Lista *li) {
    free(li);
    li = NULL;
    return li;
}

int tamanho_lista(Lista *li) {
    if (li == NULL)
        return -1;
    else
        return li->qtd;
}

int lista_cheia(Lista *li) {
    if (li == NULL)
        return -1;
    return (li->qtd == MAX);
}

int lista_vazia(Lista *li) {
    if (li == NULL)
        return -1;
    return (li->qtd == 0);
}

// return 1 in case of success
int insere_lista_final(Lista *li, Aluno al) {
    if (li == NULL)
        return 0;
    if (lista_cheia(li))
        return 0;
    li->dados[li->qtd] = al;
    li->qtd++;
    return 1;
}


int remove_lista_final(Lista *li) {
    if (li == NULL)
        return 0;
    if (lista_vazia(li))
        return 0;
    li->qtd--;
    return 1;
}

void imprime_lista(Lista *li) {
    if (li == NULL)
        return;
    int i;
    printf("\n");
    for (i = 0; i < li->qtd; i++) {
        printf("Matricula: %d\n", li->dados[i].matriculas);
        printf("Nome: %s\n", li->dados[i].nome);
        printf("Notas: %f %f %f\n", li->dados[i].n1, li->dados[i].n2,
               li->dados[i].rec);
        printf("\n");
    }
}



int missing_number(Lista* li, int N) {
    int soma = 0;
    int i;
    for (i = 1; i <= N; i++) {
        soma += i;
    }
    int soma_matriculas = 0;
    for (i = 0; i < li->qtd; i++) {
        soma_matriculas += li->dados[i].matriculas;
    }
    return soma - soma_matriculas;
}



// Dado uma turma com N alunos, cada aluno recebe um numero de matricula 0, 1 ou 2. 
// Escreva a função sort012() para ordenar a lista estatica de alunos em ordem crescente. 
// Escreva  e desenvolva um programa para demonstrar funcionamento a função sort012().
//  Utilize as funcoes basicas da Lista Estatica e a struct Aluno  para resolver esta questao.



void sort012(Lista* li, int N){
int i,j;
 //N = numero de alunos, não esquece
int aux;
int maior = li->dados[0].matriculas;

   for (i = 0; i < N - 1; i++) {
        for (j = i + 1; j < N; j++) {
            if (li->dados[j].matriculas < li->dados[i].matriculas) {
                aux = li->dados[i].matriculas;
                li->dados[i].matriculas = li->dados[j].matriculas;
                li->dados[j].matriculas = aux;
            }
        }
    }
 
 printf("-----------------ordenada----------------------");
 
 imprime_lista(li);
  libera_lista(li);
}















