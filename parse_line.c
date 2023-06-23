#include "headers.h"

char **parse_line(char *line)
{
  
  char **argv = malloc(64 * sizeof(char*));
  char *delimeter;
  int argc = 0;

  line[strlen(line)-1]=' ';

  while (*line && (*line == ' ')) 
    {
      line++;
    } 


   while ((delimeter = strchr(line, ' ')))
    {
       argv[argc++] = line;
       *delimeter = '\0';
       line = delimeter + 1;
       while (*line && (*line == ' '))
       {
          line++;
       } /* Ignore spaces */
   
    }
   argv[argc] = NULL;

  return argv;
}
