#include <stdio.h>

int main(int argc, char *argv[])
{
  if(argc < 2){
    printf("Sleep n, where n is a number in seconds to sleep.");
  }
  sleep(0); //Parameter in sleep is in seconds
  return 0;
}

