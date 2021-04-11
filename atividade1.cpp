#include <iostream>
using namespace std;

int main(){
    int n1,n2,result;
    int *p1,*p2;

    cout << "Entre com o primeiro valor: ";
    cin >> n1;
    cout << "Entre com o segundo valor: ";
    cin >> n2;

    p1 = &n1;
    p2 = &n2;

    result = *p1 + *p2;

    cout << "A soma dos valores e: " << result;

delete p1;
delete p2;
return 0;
}
