#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <stdlib.h>
typedef struct{
	bool set;
	int lcs;
}map;
map **table;

int lcs(char *a, int n, char *b, int m){
	int ret0;
	int ret1;
	if(n < 0 || m < 0){
		return 0;
	}
	if(a[n] == b[m]){
		return lcs(a, n-1, b, m-1) + 1;
	}

	if(n > 0){
		if(table[n-1][m].set != true){
			ret0 = lcs(a, n-1, b, m);
			table[n-1][m].lcs = ret0;
			table[n-1][m].set = true;
		}else{
			ret0 = table[n-1][m].lcs;
		}
	}else{
		ret0 = 0;
	}

	if(m > 0){
		if(table[n][m-1].set != true){
			ret1 = lcs(a, n, b, m-1);
			table[n][m-1].lcs = ret1;
			table[n][m-1].set = true;
		}else{
			ret1 = table[n][m-1].lcs;
		}
	}else{
		ret1 = 0;
	}

	if(ret0 > ret1){
		return ret0;
	}else{
		return ret1;
	}
}

int main(int argc, char *argv[]){
	char *a="didactical";
	char *b="advantage";
	int i;

	if(argc >= 3){
		a=argv[1];
		b=argv[2];
	}
	int n = strlen(a);
	int m = strlen(b);
	//init of table[n][m]
	table = calloc(n, sizeof(map *));
	table[0] = calloc(n*m, sizeof(map));
	for(i=1; i < n; i++){
		table[i] = table[i-1] + m;
	}

	printf("string a is: %s\n", a);
	printf("string b is: %s\n", b);

	printf("lcs(a, b) = %d\n", lcs(a, n-1, b, m-1));
	free(table);
	return 0;
}
