#include <string.h>
#include <stdio.h>
#include <stdlib.h>

struct Command
{
  char *name;
  char *pacman;
  int requires_package;
};

struct Command commands[] = {

    {"install", "pacman -S %s", 1},
    {"remove", "pacman -Rns %s", 1},
    {"search", "pacman -Ss %s", 1},
    {"update", "pacman -Syu", 0},
    {"info", "pacman -Si %s", 1},
    {"info-local", "pacman -Qi %s", 1},
    {"list", "pacman -Q", 0},
    {"list-search", "pacman -Qs %s", 1},
    {"orphans", "pacman -Qdt", 0},
    {"clean", "pacman -Sc", 0},
    {"sync", "pacman -Syy", 0}

};

int main(int argc, char *argv[])
{
  char command[256];

  int total = sizeof(commands) / sizeof(commands[0]);
  if (argc < 2)
  {
    printf("use: yuki <command> <package>\n");
    return 1;
  }

  for (int i = 0; i < total; i++)
  {
    if (strcmp(argv[1], commands[i].name) == 0)
    {
      if (commands[i].requires_package == 1)
      {
        if (argc < 3)
        {
          printf("use: yuki <command> <package>\n");
          return 1;
        }
        snprintf(command, sizeof(command), commands[i].pacman, argv[2]);
      }
      else
      {
        snprintf(command, sizeof(command), "%s", commands[i].pacman);
      }
      system(command);
      return 0;
    }
  }

  printf("unknown command\n");
  return 1;
}
