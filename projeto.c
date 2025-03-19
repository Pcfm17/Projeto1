#include <stdlib.h>
#include <stdio.h>
#include <locale.h>
#include "projeto.h"

int ciarTarefa(ListaDeTarefas *lt){
    if (lt->qtd >= TOTAL_TAREFAS)
    return 1;

    Tarefa *t=&lt->tarefas[lt->qtd];

    printf("Etre com a prioridade da tarefa:\n");
    scanf("%d", &t->prioridade);

    printf("Entre com a categoria da tarefa:\n");
    scanf("%s", t->categoria);

    printf("Entre com a descricao da tarefa:\n");
    scanf("%s", t->descricao);

    lt->qtd++;
    return 0;
}
int deletarTarefa(ListaDeTarefas *lt){
    if (lt->qtd == 0)
    return 1;
    
    int pos;
    printf("Entre com a posicao da tarefa a ser deletada:\n");
    scanf("%d", &pos);

    if (pos < 0 || pos > lt->qtd -1)
    return 2;

    for (; pos <lt->qtd -1; pos++){
    lt->tarefas[pos].prioridade = tarefas[pos+1].prioridade;
    strcpy(lt->tarefas[pos].descricao, lt->tarefas[pos+1].descricao);
    strcpy(lt_>tarefas[pos].categoria, lt->tarefas[pos+1].categoria);}
    lt->qtd--;
    return 0;
}

int listarTarefas(ListaDeTarefas *lt){
   if (lt->qtd == o)
       return 1;

    int i;
    for (i=0 ; i< lt->qtd ; i++){
    printf("Pos: %d \t Prioridade: %d  \t Categoria: %d\n", i, lt->tarefa[i]).prioridade, lt->tarefa[i].categoria;
    printf("Descricao: %s\n", lt->tarfas[i].descricao);
    }
    return 0;
}

int carregarTarefas(ListaDeTarefas *lt, char *nome){
    printf("Carregar Tarefa\n");
    return 0;
}
int salvarTarefas(ListaDeTarefas *lt, char *nome){
    printf("Salvar Tarefa\n");
    return 0;
}

void exibirMenu(){
    printf("Menu\n");
}
