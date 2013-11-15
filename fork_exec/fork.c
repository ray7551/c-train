//#include <sys/types.h>
#include <unistd.h>
#include <stdio.h>
//#include <stdlib.h>

int main(void)
{
	pid_t pid;

	/*
	printf("One\n");
	pid = fork();
	printf("Two\n");
	//printf("\n");
	*/
	
	int i;
	for(i=0; i<2; i++){
		fork();
		printf("ppid=%d, pid=%d, i=%d \n", getppid(), getpid(), i);
	}
	sleep(10);	//停留10秒，使得可以用pstree查看进程树
	return 0;
}

