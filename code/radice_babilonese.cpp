#include <stdlib.h>
#include <math.h>
#include <iostream>

using namespace std;

#define MAX 100 //Iterazioni massime
void radice_b() {
    double num, errore=1, EPS, Q, QPrec;

    cout << "CALCOLO DELLA RADICE CON METODO BABILONESE\n";
    cout << "Inserire il numero di partenza: ";
    cin >> num;
    if(num < 0) {
        cout << "Numero non valido\n";
        radice_b();
    }
    
    cout << "Inserire il valore dell'errore (tra 0.1 e 0.000001): ";
    cin >> EPS;
    QPrec = num/2;

    int i=0;
    while(i < MAX) {
        Q = (QPrec + num/QPrec)/2;
        errore = fabs((Q-QPrec)/Q);
        if(errore < EPS) {
            break;
        }
        else {QPrec =  Q;}
        i++;
    }

    if(i < MAX) {
        cout << "La radice e': " << Q << "\nCalcolo eseguito in " << i << " iterazioni";
    }
    else {
        cout << "Troppa potenza di calcolo richiesta";
    }
    
}

int main() {  

    radice_b();

    return 0;

}