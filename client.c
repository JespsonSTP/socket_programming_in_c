#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <sys/types.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <netdb.h>

/*
write a custome error function to handle error
*/

void error(const char *msg){
  perror(msg);
  exit(0);
}
/*
the cmd arg is going to contain 3 items the filename(agv[0]), ip address(agv[1]), and port(agv[2]), the port must match the server port
argc = cmd line count of arguements
argv = an array of the arguements
  */


int main(int argc, char *argv[]) {
  //initialize the variable
  int socketfd, port_num, n;

  port_num = atoi(argv[2]);

  /*
    initialize the socket file descriptor
  */
  socketfd = socket(AF_INET, SOCK_STREAM, 0);

  //check if i was able to open the socket by if i got a file descriptor
  if (socketfd < 0){
    error("wasnt able to open socket");
  }


  return 0;
}