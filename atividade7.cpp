#include <iostream>
using namespace std;

bool pilhaVazia(int pilha[],int &topo){
    if(topo == 0){
        return true;
    }
    else{
        return false;
    }
}

void empilhar(int pilha[],int x,int tamanho,int &topo){
    if(topo < tamanho){
        pilha[topo] = x;
        topo += 1;
    }
    else{
        cout << "Overflow!\n\n";
    }
}

int desempilhar(int pilha[],int &topo){
    if(pilhaVazia(pilha,topo)){
        return 'NULL';
    }
    else{
        topo = topo - 1;
        return pilha[topo+1];
    }
}

int main(){
    int tamanho;
    int topo = 0;
    cout << "Digite o tamanho da pilha: ";
    cin >> tamanho;

    int *pilha = new int[tamanho];
    int opcao,x;

    while (opcao != 5){
        cout << "1 - Inserir elemento na pilha.\n";
        cout << "2 - Remover elemento da pilha.\n";
        cout << "3 - Imprimir lista.\n";
        cout << "4 - Sair.\n\n";

        cout << "Digite a sua escolha: ";
        cin >> opcao;

        if(opcao == 1){
            cout << "Digite o valor que deseja inserir na pilha: ";
            cin >> x;
            empilhar(pilha,x,tamanho,topo);
        }
        else if(opcao == 2){
            int temp;
            temp = desempilhar(pilha,topo);
        }
        else if(opcao == 3){
            for(int i=0;i<topo;i++){
                cout << "A posicao["<<i<<"] da pilha e: "<<pilha[i]<<"\n";
            }
            cout << "\n";
        }
        else{
            break;
        }
    }

delete pilha;
return 0;
}
