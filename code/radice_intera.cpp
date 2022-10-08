#include <stdio.h>
#include <stdlib.h>
#include <math.h>

using namespace std;

int main() {
    printf("CALCOLO DELLA RADICE CON APPROSSIMAZIONE INTERA\n");
    int num, i;
    printf("Inserire il numero di partenza: ");
    scanf("%d", &num);

    while(i*i<num) {
        if(((i+1)*(i+1)-num) > (num-i*i)) {
            break;
        }

        i++;
    }

    printf("La radice di %d e': %d", num, i);
    return 0;
}