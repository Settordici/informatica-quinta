#include <stdlib.h>
#include <math.h>
#include <iostream>

#define ERRORE 0.00001

using namespace std;

double input() {
    double num;
    cout << "CALCOLO DELLA RADICE CON IL SECONDO METODO BABILONESE\n";
    cout << "Inserire il numero di partenza: ";
    cin >> num;
    if(num < 0) {
        cout << "Numero non valido\n";
        input();
    }
    
    return num;
    
}

double radice(double num) {
    double eccesso, difetto;

    eccesso = num;
    difetto = num / eccesso;

    while (abs(eccesso-difetto) > ERRORE) {
        eccesso = (eccesso + difetto) / 2;
        difetto = num / eccesso;
    }

    return difetto;
}

int main() {  

    cout << "La radice e' " << radice(input());
    return 0;

}