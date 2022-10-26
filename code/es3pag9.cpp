#include <stdio.h>
#include <conio.h>
#include <math.h>
using namespace std;
double input();
double EPS, errore;
int MAX, i;
 
double radice (double x2, double x1){ 
if(i<MAX){
	errore = fabs((x1-x2/x1)/2);
		printf ("\n%lf",errore); 
		if(errore>=EPS){
		x1= (x1+x2/x1)/2;   
		i++;
		return radice (x2,x1);
	}
	else {
		i++;
		return x1;
	}
}
else{
	printf("\nNumero iterazioni eccessivo\n");
return x1;
}

}


double input (){
		printf ("\nInserire il valore di precisione: ");
	scanf ("%lf",&EPS);
	printf ("\nInserire il valore massimo di iterazioni: ");
	scanf ("%d",&MAX);
	return 0;
}

int main(){
	input();
	double Q;
	int a;
		printf ("\nInserire un numero di cui vui ricavare la radice quadrata: ");
	scanf ("%d",&a);
	if(a<0) exit(0);
	Q=radice (a, 1);
	printf ("\nLa radice quadrata di %d e': %lf",a,Q);
}