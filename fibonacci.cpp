#include <iostream>
using namespace std;

int fib_ite_array(int n) {
    if (n <= 1) {
        return n;
    }

    int fibonacci[n+1];
        fibonacci[0] = 0;
        fibonacci[1] = 1;

    for (int i = 2; i <= n; i++) {
        fibonacci[i] = fibonacci[i-1] + fibonacci[i-2];
    }

    return fibonacci[n];
}

int main() {
    int n; 

    cout << "Digite um numero: " << endl;
    cin >> n;

    int resultado = fib_ite_array(n);
        cout << "O " << n << " proximo numero da sequencie e " << resultado << endl;
    return 0;
}