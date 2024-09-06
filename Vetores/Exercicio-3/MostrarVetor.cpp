#include <iostream>
using namespace std;
#define size 10

void PositivoBasico(int vet[], int n){
    for(int i = 0; i<n; i++){
        cout << "Tipo 1:" << vet[i] << endl;
    }
    cout << endl;
}

void PositivoDefine(int vet[size], int n){
    for(int i = 0; i<n; i++){
        cout << "Tipo 2:" << vet[i] << endl;   
    }
    cout << endl;
}

void PositivoPonteiro(int *pV, int n){
    for(int i = 0; i<n; i++){
        cout << "Tipo 3:" << pV[i] << endl;
    }
}

int main(){
    int i=0;
    int vetor[size];

    while ( i != size && cin >> vetor[i] && vetor[i] !=0){
        i++;
    }

    PositivoBasico(vetor, i);
    PositivoDefine(vetor, i);
    PositivoPonteiro(vetor, i);

    return 0;
}