#ifndef HEADERS_H
#define HEADERS_H

#include <sys/wait.h>
#include <sys/types.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <sys/stat.h>
#include <stdbool.h>
#include <sys/ipc.h>
#include <sys/shm.h>



int echo_func(char **argv,int i);
int exit_func(char **argv,int i);
int pwd_func(char **argv,int i);
int cd_func(char **argv,int i);

int execute(char **argv);
int launch(char **argv);
char **parse_line(char *line);
void shell_loop(void);

#endif
