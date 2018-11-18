#ifdef CS333_P5
#include "types.h"
#include "user.h"

// Sets the user UID for the target specified by pathname.
int
main(int argc, char *argv[])
{
  if(argc > 2)
  {
    if(atoi(argv[1]) >= 0)
      if(chown(argv[2], atoi(argv[1])) < 0)
        printf(1, "chown %s failed\n", argv[2]);
       else
        printf(1, "Invalid argument for owner ID\n");
    else
      printf(1, "Invalid number of arguments for chown\n");
  }
  exit();
}
#endif // CS333_P5
