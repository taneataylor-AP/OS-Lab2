/* hello_signal.c */
#include <stdio.h>
#include <stdlib.h>
#include <signal.h>
#include <unistd.h>
#include "timer.h"

//signal handler
void handler(int signum) {
  printf("Hello World!\n");
  increment_alarm();
}

int main(int argc, char * argv[])
{
  signal(SIGINT,sigint_handler); // Register handler to handle SIGINT.
  signal(SIGALRM,handler); // Register handler to handle SIGALRM.
  while(1){
    alarm(1); // Schedule a SIGALRM only for a second.
    sleep(1);
    printf("Turing was right!\n");
  }
  return 0;
}