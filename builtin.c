#include "headers.h"


int exit_func(char **argv,int i)
{  

   return 0;

}


int echo_func(char **argv,int i)
{

 
   if (argv[i+1] == NULL)
   {
    printf("\n");
  } 
 
   int argc = i+1;
  
   while(argv[argc]!=NULL)
   {  
     if(argv[argc+1]==NULL)
     {
      printf("%s\n",argv[argc]);
      return 1;
     }
      printf("%s",argv[argc]);
      printf(" ");
      argc++;
   }
  
  
 
  
  return 1;
}



int pwd_func(char **argv,int i)

{

    char *temp= malloc(500 * sizeof(char));
    if (temp != NULL)
     {
      
        if (getcwd(temp, 1024) != NULL) 
        {
            printf("%s\n",temp);
        } 
        else 
        {
            printf("Failed to get the current working directory.\n");
        }
       free(temp);
    } 
    else
     {
        printf("Memory allocation error.\n");
     }
  
    

   return 1;
}



int cd_func(char **argv,int i)
{

 
   if (argv[i+1] == NULL)
   {
     printf("cd : missing file operand\n");
   } 
 
   else
   {
     int val = chdir(argv[i+1]);
     if(val != 0)
     {
      printf("Error in changing the directory\n");
     }
   }
  
  
  return 1;
}
