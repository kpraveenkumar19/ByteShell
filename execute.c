#include "headers.h"


char *command_list[] = {
  "echo",
  "exit",
  "cd",
  "pwd",
};

int (*command_func_list[]) (char **,int ) = {
  &echo_func,
  &exit_func,
  &cd_func,
  &pwd_func,
 
};

int execute(char **argv)
{  
   int j = 0;
   if (argv[0] == NULL)
    {
    return 1;
    }
   else if(strcmp(argv[0],"builtin") == 0)
   {
    for (int i = 0; i < 4; i++)
    {
      if (strcmp(argv[1], command_list[i]) == 0)
      {
        return (*command_func_list[i])(argv,j+1);
      }
    }
   }
   else
   {
      for (int i = 0; i < 4; i++)
    {
      if (strcmp(argv[0], command_list[i]) == 0)
      {
        return (*command_func_list[i])(argv,j);
      }
    }
   }
  

  return launch(argv);
}


int launch(char **argv)
{
  pid_t pid;
  int status;

  pid = fork();

  if (pid == 0)
   {
    if (execvp(argv[0], argv) == -1)
     {
       printf("%s: command not found\n",argv[0]);
     }
    exit(1);
  } 

  else if (pid < 0)
   {
    return 1;
   } 

  else
   {
    do
     {
      waitpid(pid, &status, WUNTRACED);
     } while (!WIFEXITED(status) && !WIFSIGNALED(status));
   }

  return 1;
}