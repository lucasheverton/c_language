// 1) Imprime valores de 1 a 10.

#include <stdio.h>

int main() {
	
	printf("--------WHILE--------\n");
	int l;
	l = 1;
	while(l <= 10) {
		printf("%d\n", l);
		l++;
	}
	
	printf("--------FOR--------\n");
	int i;
	for(i= 1;i<=10;i++){
		printf("%d\n", i);
	}
	
	
	printf("--------DO WHILE--------\n");
	i = 1;
	do {
		printf("%d\n", i);
		i++;
	} while(i<=10);

	return 0;
}


