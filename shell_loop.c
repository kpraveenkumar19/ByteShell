#include "headers.h"

void shell_loop(void)
{

  char **argv;
  int status;

  do {
      printf("> ");
      char *read_line = NULL;
      ssize_t line_size = 0; 

      int val = getline(&read_line, &line_size, stdin);

      if (val == -1)
        {
          if (feof(stdin)) 
          {
            exit(0);  
          } 
       }
   
    argv = parse_line(read_line);
    status = execute(argv);

    free(read_line);
    free(argv);

  } while (status);
}
