#include <iostream>
using namespace std;
#define size 6

void PositivoBasico(int vet[], int n){
    for(int i = 0; i<n; i++){
        if(vet[i]>0){
            cout << "Tipo 1:" << vet[i] << endl;
        }
    }
    cout << endl;
}

void PositivoDefine(int vet[size]){
    for(int i = 0; i<size; i++){
        if(vet[i]>0){
            cout << "Tipo 2:" << vet[i] << endl;
        }
    }
    cout << endl;
}

void PositivoPonteiro(int *pV, int n){
    for(int i = 0; i<n; i++){
        if(pV[i]>0){
            cout << "Tipo 3:" << pV[i] << endl;
        }
    }
}

int main(){
    int i=0;
    int vetor[size];

    while ( i != size && cin >> vetor[i] && vetor[i] !=0){
        i++;
    }

    PositivoBasico(vetor, i);
    PositivoDefine(vetor);
    PositivoPonteiro(vetor, i);

    return 0;
}