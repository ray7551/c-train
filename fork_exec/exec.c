#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>


int main(void)
{
	/*
	if(0 > execl("/bin/ls", "ls", "-a", "-l", NULL)){
		printf("Error");
	}

	if(0 > execlp("ls", "ls", "-a", "-l", NULL)){
		printf("Error");
	}

	char *const ps_envp[] = {"PATH=/bin:/usr/bin:/usr/local/bin"};
	if(0 > execle("ls", "ls", "-al", NULL, ps_envp)){
		printf("ERROR");
	}
	*/
	char *const ps_argv[] = {"ps", "-o", "pid,ppid,pgrp", NULL};
	if(0 > execvp("ps", ps_argv)){
		printf("Error");
	}
	return 0;
}
