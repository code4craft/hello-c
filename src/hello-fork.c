#include <stdio.h>
#include <unistd.h>
int main(int argc, const char* argv[]) {
  pid_t pid;
  printf("Hello, World!%d\n",pid);
  for (int i=0;i<2;i++){
      pid = fork();
      if (pid == 0){
        printf("I am child");
      } else {
        printf("I am parent, my child is %d",pid);
      }
  }
  return 0;
}