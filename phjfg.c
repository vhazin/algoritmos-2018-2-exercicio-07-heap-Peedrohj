#include <stdio.h>
#include <stdlib.h>

typedef struct treap{
    char rotulo;
    int prioridade;
    struct treap *pai
} Treap;

void print(Treap array[], int tamanho){
    for(int i=0; i<tamanho; i++){
        Treap novo;
        novo.prioridade = 0;
        if(array[i].prioridade == 0){
            break;
        }
        else if(array[i+1].prioridade > novo.prioridade){
            novo.prioridade = array[i+1].prioridade;
            novo.rotulo = array[i+1].rotulo;
        }
    }
    
    for(int j=0; j<tamanho; j++){
        printf("(");
        printf("%c/%d)", array[j].rotulo, array[j].prioridade);
    }
}

int main(){
    int n;
    Treap arvore[n];
    scanf("%d", &n);
    while(n--){
        for(int i=0; i<n; i++){
            int num;
            char letra;
            scanf("%c/%d", &letra, &num);

            if(num == 0){
                break;
            }
            else{
                arvore[i].rotulo = letra;
                arvore[i].prioridade = num;
            }
        }
    }   

    return 0;
}

