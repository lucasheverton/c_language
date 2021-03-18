// 1) Programa que imprime somente os números pares entre 1 e 500.

#include <stdio.h>

int main() {

		int i;
		
		for(i = 1; i<=500; i++){
			if(i%2 == 0){
				printf("%d \n", i);	
			}
		}

	return 0;
}


