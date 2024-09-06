#include <iostream>
using namespace std;
#define size 6

float MediaBasica(int vet[], int n){
    float media = 0;
    for(int i = 0; i<n; i++){
        media += vet[i];
    }
    return (media)/n;
}

float MediaDefine(int vet[size]){
    float media = 0;
    for(int i = 0; i<size; i++){
        media += vet[i];
    }
    return (media)/size;
}

float MediaPonteiro(int *pV, int n){
    float media = 0;
    for(int i = 0; i<n; i++){
        media += pV[i];
    }
    return (media)/n;
}


int main(){
    int i=0;
    int vetor[size];

    while ( i != size && cin >> vetor[i] && vetor[i-1] !=0 ){
        i++;
    }

    cout << "Maior numero jeito 1: " << MediaBasica(vetor, i) << endl;
    cout << "Maior numero jeito 2: " << MediaDefine(vetor) << endl;
    cout << "Maior numero jeito 3: " << MediaPonteiro(vetor, i) << endl;

    return 0;
}