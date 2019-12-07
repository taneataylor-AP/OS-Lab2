#include "timer.h"
#include <stdio.h>
#include <stdlib.h>

int total_num_alarms = 0;
void increment_alarm() {
  total_num_alarms += 1;
}

void sigint_handler(int signum)
{ // SIGINT signal handler
  printf("\nTotal alarms occured: %d\n", total_num_alarms);
  printf("So the program was executed for %d seconds.\n", total_num_alarms);
  exit(0);
}