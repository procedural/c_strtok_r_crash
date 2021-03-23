#include <string.h>

int main() {
  char * str = "**";
  char * nextToken = 0;
  char * it = strtok_r(str, ";", &nextToken);
  return 0;
}