#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>


int main(){
  char* filename = "lemon.txt";

  int file = open(filename, O_RDONLY);
  char firstfile[100];
  read(file,firstfile,100);
  printf("%d Bytes currently \n", file);
  printf("%s\n",firstfile);
  close(file);

  file = open(filename, O_RDWR);
  char * writein = "Why do these words rhyme poorly";
  int written = write(file,writein,31);
  printf("%d Bytes Written in\n",written);
  close(file);

  file = open(filename, O_RDONLY);
  char infile[31];
  read(file,infile,31);
  printf("%s\n",infile);
  close(file);

/*
  file = open(filename, O_WRONLY);
  char * reset = "lemon";
  int rewrite = write(file,reset,strlen(reset));
  close(file);
*/

  return 0;
}
