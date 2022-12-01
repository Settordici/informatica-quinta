//Alessandro Bussi
#include <iostream>
#include <time.h>
using namespace std;

//Funzione che calcola il pi greco con il metodo di Montecarlo

int main(){
    
    int n=100000;
    srand(time(NULL));
    double x,y;
    int i;
    int conta=0;
    
    for(i=0;i<n;i++){
        
        x=(double)rand()/RAND_MAX;
        y=(double)rand()/RAND_MAX;
        
        if(x*x+y*y<=1){
            conta++;
        }
    }
    
    double pi = 4*(double)conta/n;
    cout.precision(15);
    cout<<"Il valore di pi greco calcolato con il metodo di Montecarlo e': "<<pi;
    
    return 0;
}