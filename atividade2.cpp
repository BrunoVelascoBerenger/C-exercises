#include <iostream>
using namespace std;

int main(){
    int tamanho;
    int *pt1;
    int *pt2;
    int *pt3;

    cout << "Digite o tamanho do vetor: ";
    cin >> tamanho;
    cout << "\n";

    int *v1 = new int[tamanho];
    int *v2 = new int[tamanho];
    int *v3 = new int[tamanho];
    pt1 = v1;
    pt2 = v2;
    pt3 = v3;

    for(int i = 0; i<tamanho;i++){
        cout << "Informe o valor da posicao [" << i << "]do primeiro vetor: ";
        cin >> v1[i];
        cout << "Informe o valor da posicao [" << i << "]do segundo vetor: ";
        cin >> v2[i];
    }
    cout << "\n";

    for(int i = 0; i<tamanho;i++){
        *(pt3+i) = *(pt1+i)+ *(pt2+i);
        cout << "O valor da posicao [" << i << "]do terceiro vetor e: " <<*(pt3+i)<<"\n";
    }

delete[] v1;
delete[] v2;
delete[] v3;

return 0;
}
