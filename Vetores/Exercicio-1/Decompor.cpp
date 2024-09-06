#include <iostream>
using namespace std;

int Decompor(double *x){
    int inteiro = int(*x);
    *x-=inteiro;
    return inteiro;
}

int main(){
    double decimal;
    int inteiro;
    cin >> decimal;

    inteiro = Decompor(&decimal);

    cout << "O valor inteiro do numero eh: " << inteiro << endl;
    cout << "O valor decimal do numero eh: " << decimal << endl;
    return 0;
}