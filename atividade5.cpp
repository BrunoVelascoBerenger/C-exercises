#include <iostream>
#include <math.h>
using namespace std;

void ordena_ins_sort(int v[],int n){
    int i,j,chave;
    for(i=0;i<n;i++){
        for(i=1; i<n;i++){
            chave = v[i];
            j = i-1;

            while((j >= 0) && (v[j] > chave)){
                v[j+i] = v[j];
                j--;
            }
            v[j+1] = chave;
        }
    }
}

int main(){
    int n;
    cout << "Digite o tamanho do vetor: ";
    cin >> n;

    int *vetor = new int[n];

    for(int i=0;i<n;i++){
        cout << "Digite o valor para a posicao["<<i<<"] do vetor: ";
        cin >> vetor[i];
    }

    for(int i=0;i<n;i++){
        cout << "O valor da posicao["<<i<<"] do vetor e: "<<vetor[i]<<"\n";
    }

    ordena_ins_sort(vetor,n);

    for(int i=0;i<n;i++){
        cout << "O valor da posicao["<<i<<"] do vetor e: "<<vetor[i]<<"\n";
    }

delete vetor;
return 0;
}
