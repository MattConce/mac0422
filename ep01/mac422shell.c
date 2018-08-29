#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <sys/types.h>
#include "mac422shell.h"



int main(int *argc, char** argv)
{
  char* line;
  char** args;
  Bool done = FALSE;

  do {
    printf("> ");
    readLine();
    parseLine();

  }while(done == FALSE);
}

char* readLine()
{
 return NULL;
}

char** parseLine()
{
 return NULL;
}
