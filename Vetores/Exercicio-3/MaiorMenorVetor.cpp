#include <iostream>
using namespace std;
#define size 6

void MaiorNumBasico(int vet[], int n){
    int maior = vet[0];
    int menor = vet[0];
    for(int i = 1; i<n; i++){
        maior = (vet[i] > maior? vet[i] : maior);
        menor = (vet[i] < menor? vet[i] : menor);
    }
    cout << "O maior tipo 1: " << maior << endl;
    cout << "O menor tipo 1: " << menor << endl << endl; 
}

void MaiorNumDefine(int vet[size]){
    int maior = vet[0];
    int menor = vet[0];
    for(int i = 1; i<size; i++){
        maior = (vet[i] > maior? vet[i] : maior);
        menor = (vet[i] < menor? vet[i] : menor);
    }
    cout << "O maior tipo 2: " << maior << endl;
    cout << "O menor tipo 2: " << menor << endl << endl; 
}

void MaiorNumPonteiro(int *pV, int n){
    int maior = *pV;
    int menor = *pV;
    for(int i = 1; i<n; i++){
        maior = (pV[i] > maior? pV[i] : maior);
        menor = (pV[i] < menor? pV[i] : menor);
    }
    cout << "O maior tipo 3: " << maior << endl;
    cout << "O menor tipo 3: " << menor << endl; 
}


int main(){
    int i=0;
    int vetor[size];

    while (i != size && cin >> vetor[i] && vetor[i] !=0 ){
        i++;
    }
    
    MaiorNumBasico(vetor, i);
    MaiorNumDefine(vetor);
    MaiorNumPonteiro(vetor, i);

    return 0;
}