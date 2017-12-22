//gcc cpuHog.c -o cpuHog

#include <pthread.h>
#include <unistd.h>

void *runThread()
{
    while (1);
}

int main()
{
  pthread_t thread;

  for( int i=1; i<sysconf(_SC_NPROCESSORS_ONLN); ++i ) 
    pthread_create( &thread, NULL, runThread, NULL );

  while(1);
}