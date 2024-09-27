#include <iostream>  

using namespace std; 

int main() {
    int INDICE = 12, SOMA = 0, K = 1;

    
    while (K < INDICE) {
        K = K + 1;        
        SOMA = SOMA + K; 
    }


    cout << "SOMA = " << SOMA << endl;

    return 0;
}
