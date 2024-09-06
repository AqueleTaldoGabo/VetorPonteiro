#include <iostream>
using namespace std;
#define size 6

int MaiorNumBasico(int vet[], int n){
    int maior = vet[0];
    for(int i = 1; i<n; i++){
        maior = (vet[i] > maior? vet[i] : maior);
    }
    return maior;
}

int MaiorNumDefine(int vet[size]){
    int maior = vet[0];
    for(int i = 1; i<size; i++){
        maior = (vet[i] > maior? vet[i] : maior);
    }
    return maior;
}

int MaiorNumPonteiro(int *pV, int n){
    int maior = *pV;
    for(int i = 1; i<n; i++){
        maior = (pV[i] > maior? pV[i] : maior);
    }
    return maior;
}


int main(){
    int i=0;
    int vetor[size];

    while ( i != size && cin >> vetor[i] && vetor[i-1] !=0 ){
        i++;
    }
    
    cout << "Maior numero jeito 1: " << MaiorNumBasico(vetor, i) << endl;
    cout << "Maior numero jeito 2: " << MaiorNumDefine(vetor) << endl;
    cout << "Maior numero jeito 3: " << MaiorNumPonteiro(vetor, i) << endl;

    return 0;
}