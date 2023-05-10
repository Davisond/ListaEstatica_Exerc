#include "library.h"
#include "library.c"
#include <stdio.h>
#include <string.h>


//      INSERINDO ALUNOS EM UMA LISTA ESTÁTICA
int main(){
    Lista *li = NULL;
    Aluno Nicolas, Davison, Vinicius;
   li = cria_lista();

    strcpy(Davison.nome, "davison que n pode rodar");
    Davison.matriculas = 1;
   insere_lista_final(li, Davison);  


    strcpy(Nicolas.nome, "nicolas futuro dev");
    Nicolas.matriculas = 2;
   insere_lista_final(li, Nicolas);  

    
    strcpy(Vinicius.nome, "vini empresario");
    Vinicius.matriculas = 0;
   insere_lista_final(li, Vinicius);  
   

   
    imprime_lista(li);
  int N = 3;
    sort012(li, N);
   
    
//                  ENTRADA DO EXERCÍCIO QUE O DEL-DEL PEDIU
  
   













};

