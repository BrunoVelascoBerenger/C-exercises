#include <iostream>
#include <list>

using namespace std;

typedef struct Dado {
        int chave;
    } Dados;

//busca
int busca(int x,Dados lista[],int tamanho){
    int i = 0;
    while(i<=tamanho){
        if(lista[i].chave == x){
            return i;
        }
        i++;
    }
return -1;
}

//inserir
void insere(int x,Dados lista[],int tamanho,int &preenchidos){
    if(preenchidos < tamanho){
        if(busca(x,lista,tamanho) == - 1){
            lista[preenchidos].chave = x;
            preenchidos = preenchidos+1;
        }
        else{
            cout << "Elemento ja existe!\n";
        }
    }
    else{
        cout << "Overflow!\n\n";
    }
}

//remover
void remover(int x,Dados lista[],int tamanho,int &preenchidos){
    if(preenchidos != 0){
        int indice = (busca(x,lista,tamanho));
        if(indice != -1){
            int valor_recuperado = lista[indice].chave;
            for(int i = indice;i < preenchidos-1;i++){
                lista[i] = lista[i+1];
            }
            preenchidos -= 1;
        }
        else{
            cout << "Elemento nao existe!\n\n";
        }
    }
    else{
        cout << "Underflow!\n\n";
    }
}


int main(){
    int tamanho;
    cout << "Digite o tamanho da lista: ";
    cin >> tamanho;

    Dados *lista = new Dados[tamanho];
    int preenchidos = 0;
    int opcao;
    int x;

    for(int i = 0;i<tamanho;i++){
        lista[i].chave = 'null';
    }

    while(opcao != 5){

    cout << "1 - Inserir elemento na lista.\n";
    cout << "2 - Remover elemento da lista.\n";
    cout << "3 - Buscar elemento na lista.\n";
    cout << "4 - Sair.\n";
    cout << "5 - Imprimir lista.\n\n";

    cout << "Digite a sua escolha: ";
    cin >> opcao;

    if(opcao == 1){
        cout << "Digite o numero a ser inserido: ";
        cin >> x;
        insere(x,lista,tamanho,preenchidos);
    }
    else if(opcao == 2){
        cout << "Digite o numero a ser removido: ";
        cin >> x;
        remover(x,lista,tamanho,preenchidos);
    }
    else if(opcao == 3){
        cout << "Digite o valor a ser buscado: ";
        cin >> x;
        int result = busca(x,lista,tamanho);
        if(result == -1){
            cout << "Numero nao encontrado! \n";
        }
        else{
            cout << "O numero: "<<lista[result].chave<<" foi encontrado!\n\n";
        }
    }
    else if(opcao == 5){
        for(int i=0;i<tamanho;i++){
            cout<< "O numero na posicao["<<i<<"] da lista e:"<<lista[i].chave<<"\n";
        }
    }
    else{
        break;
        }
    }


delete lista;
return 0;
}
