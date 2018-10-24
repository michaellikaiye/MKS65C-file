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
  int bytes = read(file,firstfile,100);
  printf("%d Bytes currently \n", bytes);
  printf("%s\n",firstfile);
  close(file);

  file = open(filename, O_RDWR);
  char * to_write = "Demon does rhyme with lemon";
  int writebytes = write(file,to_write,strlen(to_write));
  printf("%d Bytes were written in\n",writebytes);
  printf("%s\n",to_write);
  close(file);

  file = open(filename,O_WRONLY);
  char * reset = "Does demon rhyme with lemon";
  write(file,reset,strlen(reset));
  close(file);

  return 0;

}
