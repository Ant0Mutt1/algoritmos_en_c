#include <stdio.h>
#include <time.h>
#include <stdlib.h>

void shuffle(int n, int lista[]) {
	int flag = 0;
	int lista_temp[n];
    
	for (int i=0; i<n; i++) {
		lista_temp[i] = '\0';
	}

	srand(time(NULL));
	while(flag<n) {

		int r= rand() % n;
		if(lista_temp[r] == '\0') {
			lista_temp[r] = lista[flag];
			flag++;
		}
	}

	for(int i =0; i<n; i++) {
		lista[i] = lista_temp[i];
	}

}
void main() {

	int lista[6] = {11, 12,13,14, 15, 16};
	shuffle(6, lista);
	for(int i = 0; i<6; i++) {
		printf("%d ", lista[i]);
	}

}