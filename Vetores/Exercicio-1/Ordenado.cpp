#include <iostream>
using namespace std;

void Ordenada(int *x, int *y){
    int aux;
    if(*x < *y){
        aux = *x;
        *x=*y;
        *y=aux;
    }
}

int main(){
    int a, b;
    cin >> a >> b;

    Ordenada(&a, &b);

    cout << a << " " << b << endl;

    return 0;
}