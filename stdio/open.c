#include <fcntl.h>
#include <errno.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

int main(void){
	int fd;
	int n;
	fd = open("somefile", O_WRONLY|O_CREAT, 0664);
	if(fd == -1){
		fputs(strerror(errno), stderr);
		printf("\n");
		exit(1);
	}

	char buf[10];
	n = read(STDIN_FILENO, buf, 10);
	if(n < 0){
		perror("read STDIN_FILENO");
		exit(1);
	}
	write(STDOUT_FILENO, buf, n);
	return 0;
}

