#include <stdio.h>

int main(int argc, char *argv[])
{
  if(argc < 2){
    printf("Sleep n, where n is a number in seconds to sleep.\n");
    return 0;
  }
  else{
  int sleepTime;
  sleepTime = atoi(argv[1]);
  sleep(sleepTime); //Parameter in sleep is in seconds
  return 0;
  }
}

