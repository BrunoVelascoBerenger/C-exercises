#include <iostream>
using namespace std;

int busca_binaria_rec(int x,int esq,int dir,int v[]){
    if(esq == (dir -1)){
        return dir;
    }
    else{
        int meio = (esq + dir) / 2;
        if(v[meio] < x){
            return busca_binaria_rec(x,meio,dir,v);
        }
        else{
            return busca_binaria_rec(x,esq,meio,v);
        }
    }
}

int busca_binaria(int x,int n,int v[]){
    int esquerda,meio,direita;
    esquerda = -1;
    direita = n;

    while(esquerda < (direita -1)){
        meio = (esquerda+direita)/2;
        if(v[meio] < x){
            esquerda = meio;
        }
        else{
            direita = meio;
        }
    }
    return direita;
}

int main(){
    int n,valor,dir;
    cout << "Entre com o tamanho do vetor: ";
    cin >> n;

    int *vetor = new int[n];

    for(int i=0; i< n;i++){
        cout << "Digite o valor em ordem crescente para a posicao["<<i<<"]: ";
        cin >> vetor[i];
    }

    cout << "Digite o valor a ser buscado: ";
    cin >> valor;

    //cout << busca_binaria(valor,n,vetor);
    dir = busca_binaria_rec(valor,-1,n,vetor);

    if(vetor[dir]== valor){
        cout << "O valor "<<valor<< " foi encontrado!";
    }
    else{
        cout << "O valor "<<valor<< " não foi encontrado!";
    }

delete vetor;
return 0;
}
