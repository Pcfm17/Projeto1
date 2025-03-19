#include <stdio.h>
#include "projeto.h"

int main(){
    ListaDeTarefas lt;
    char arquivo[]="tarefas";
    int opcao, codigo;
    codigo=carregarTarefas(&lt,arquivo);
    if (codigo != 0){
        printf("Lista de tarefas não carregada");
        lt.qtd=0;
    }

    do{
        exibirMenu();
        scanf("%d", &opcao);

        if (opcao == 0){}
        if else (opcao == 1){
            codigo=criarTarefa(&lt);
            if (codigo == 1){
                printf("Erro em criar tarefa: Sem aspaço disponivel.\n");
            }
        }
        if else (opcao == 2){
            codigo=deletarTarefa(&lt);
            if (codigo == 1){
                printf("Erro ao deletar tarefa: nao existem tarefas para deletar.\n");
            }
            if else (opcao == 2){
                printf("Erro ao deletar tarefa: posicao invalida.\n");
            }
        }
        if else (opcao == 3){
            codigo=listarTarefa(&lt);
            if (codigo == 1){
                printf("Erro em criar tarefa: Sem aspaço disponivel.\n");
            }
        }
        else {printf("Opcao invalida\n");}
    }while(opcao != 0);
}
