//Alessandro Bussi

#include <iostream>
#include <time.h>
#include <stdlib.h>
#define LANCI 1000

using namespace std;


int main() {
	double seme, testa=0, croce=0;
	int num;
	float risultati[6];
	cout << "\nCalcolo di 1000 lanci di dadi: \n";
	cout << "\nInserire un seme: ";
	cin >> seme;
	
	srand(seme);
	for(int i=0; i<LANCI; i++) {
		num = rand() % 6 + 1;
		risultati[num-1]++;
		//cout << num << endl;
	}
	cout << "1: " << risultati[0] << " (" << risultati[0]/LANCI*100 << "%)" << endl;
	cout << "2: " << risultati[1] << " (" << risultati[1]/LANCI*100 << "%)" << endl;
	cout << "3: " << risultati[2] << " (" << risultati[2]/LANCI*100 << "%)" << endl;
	cout << "4: " << risultati[3] << " (" << risultati[3]/LANCI*100 << "%)" << endl;
	cout << "5: " << risultati[4] << " (" << risultati[4]/LANCI*100 << "%)" << endl;
	cout << "6: " << risultati[5] << " (" << risultati[5]/LANCI*100 << "%)" << endl;
	return 0;
}
