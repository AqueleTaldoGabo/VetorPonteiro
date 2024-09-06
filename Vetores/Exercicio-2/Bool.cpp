#include <iostream>
using namespace std;

bool has_zero(int a[], int n) { 
    int i;

    for (i = 0; i < n; i++) {
        if (a[i] == 0) 
            return true; 
    }
    return false;
}

int main(){
    int vetorA[] = {1, 2, 0, 4, 5};
    bool x;

    x = has_zero(vetorA, 5);

    cout << x << endl;

    return 0;
}