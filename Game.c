#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char ** argv) {
    char exe[64];

    setenv("LC_ALL", "ja_JP.UTF-8", 1);
    sprintf(exe, "%s.exe", argv[0]);
    extern char** environ;
    char *newargv[] = { "/usr/bin/wine", exe, NULL };
    if (execve(newargv[0], newargv, environ) > 0) {
        printf("ok\n");
    } else {
        printf("not ok\n");
        perror("execve"); 
    }
    return(0);
}
