#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <stdlib.h>

typedef struct{
	bool set;
	int lcs;
}map;

int main(int argc, char *argv[]){
	int m=5, i=0;
	int n=5, j=0;
	if(argc >= 3){
		m=(int)*argv[1];
		n=(int)*argv[2];
	}

	map table[m][n];
	for(i=0; i < m; i++){
		for(j=0; j < n; j++){
			table[i][j].set = false;
			table[i][j].lcs = 0;
		}
	}
	printf("%d \n", table[0][0].lcs);
	return 0;
}
