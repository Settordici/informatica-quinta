#include <iostream>
#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <stdlib.h> 

using namespace std;

int ITE=13;
double EPS;
double radice_quadrata(double a);

main(){

	cout<<("Inserisci un numero reale positivo: ");
	double numero;
	cin>> numero;
	
	if(numero<0){
		cout<<"\nNumero negativo!\n\n";
		abort();	
	}
	
	cout<<("\nInserisci il valore della precisione (tra 0.1 e 0.0001): ");
	cin>> EPS;
	cout<<("\n");
	
	double min=0.0001;
	double max=0.1;
	
	if(EPS>max){
		cout<<"\nPrecisione non accettata!\n\n";
		abort();	
	}else if(EPS<min){
		cout<<"\nPrecisione non accettata!\n\n";
		abort();	
	}
	
	cout<<radice_quadrata(numero);
}

double radice_quadrata(double a){
    
	double Q,QPrecedente, errore; 
	int n;
	int esci=0;   

	QPrecedente=a/2;      
	
	for(n=0;n<ITE && !esci;n++){    
		
		Q=(QPrecedente+a/QPrecedente)/2; 
		errore=abs(((Q-QPrecedente)/Q)); 
		
		cout<<"\nErrore calcolato= "<<errore<<"  Iterazione N="<<n+1<<"\n\n";
		
		if (errore<EPS){   
 			esci=1;		
		}          
		else{    
			QPrecedente=Q;
		}
	}

	if(n>=ITE){
		cout<<"Numero iterazioni ridotto\n";
	}
	cout<<"\nIl risultato e': \n\n";
	return Q;
}
