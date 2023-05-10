#ifndef UNTITLED1_LIBRARY_H
#define UNTITLED1_LIBRARY_H


#define MAX 10
// TAD1
struct aluno {
    int matriculas;
    char nome[30];
    float n1, n2, rec;
} typedef Aluno;

struct lista {
    int qtd;
    Aluno dados[MAX];
} typedef Lista;


// functions tittle
void sort012(Lista* li, int N);
int missing_number(Lista* li, int N);
Lista *cria_lista();
Lista *libera_lista(Lista *li);
int tamanho_lista(Lista *li);
int lista_cheia(Lista *li);
int lista_vazia(Lista *li);
int insere_lista_final(Lista *li, Aluno al);
int remove_lista_final(Lista *li);
void imprime_lista(Lista *li);



#endif //UNTITLED1_LIBRARY_H
