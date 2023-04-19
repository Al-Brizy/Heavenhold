#include <stdio.h>

int main()
{
	int a[4][4];
	int b[4][4];
	int c[4][4];
	int i, j;
	
	for( i = 0; i < 4; i++){
		for( j = 0; j < 4; j++){
		scanf("%d", &a[i][j]);
		}
	}
	for( i = 0; i < 4; i++){
		for( j = 0; j < 4; j++){
		scanf("%d", &b[i][j]);
		}
	}
	for( i = 0; i < 4; i++){
		for( j = 0; j < 4; j++){
			c[i][j] = a[i][j] + b[i][j];
			printf("%d ", c[i][j]);
				if(j == 3){
					printf("\n");
				}
		}
	}
	return 0;
}
