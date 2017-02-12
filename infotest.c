#include "types.h"
#include "user.h"

int
main(int argc, char *argv[])
{
  printf(1, "type 1: %d\n", info(1));
  printf(1, "type 2: %d\n", info(2));
  exit();
}
