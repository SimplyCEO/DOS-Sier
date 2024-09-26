#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lib/fcaseopen/fcaseopen.h"

const char*
generatepath(const char *path)
{
  char *real_path = malloc(sizeof(char));
  *real_path = '\0';

  if (path && path[0] != '\0')
  {
    real_path = realloc(real_path, sizeof(char)*strlen(path)+2);

    switch (path[1])
    { case 0:
      { switch (path[0])
        {
          case '.': case '-': case '~':
          {
            real_path[0] = path[0];
            real_path[1] = '\0';
          } break;
          default: break;
        }
      } break;
      default:
      {
        free(real_path);
        real_path = NULL;
      } break;
    }
  }

  return real_path;
}

int main(int argc, char **argv)
{
  const char *path = generatepath(argv[1]);

  if (!path && argv[1])
  {
    char *real_path = (char*)casepath(argv[1]);
    printf("%s", real_path);
    free(real_path);
  }
  else
  { printf("%s", path); }

  free((char*)path);
  return 0;
}

