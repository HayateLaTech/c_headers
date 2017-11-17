#include <stdio.h>

#if defined(_WIN32) || defined(_WIN64)
        const char* os = "w";
#else
#ifdef __linux
        const char* os = "l";
#else
        const char* os = "u";
#endif
#endif

void clearscr() {
  if (os == "w") {
    system("cls");
  } else {
    printf("\x1b[2J\x1b[1;1H");
  }
}
