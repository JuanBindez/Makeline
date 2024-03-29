#include <stdio.h>
#include <stdlib.h>
#include <string.h>


#define VERSION "2.0.0"
#define AUTHOR "Copyright (C) 2023 Juan Bindez <juanbindez780@gmail.com>"
#define LICENSE "GNU General Public License, version 2"

void showHelp() {
    // Display program information
    printf("Makeline %s\n", VERSION);
    printf("Syntax: makeline [-h] [OPTIONS] FILE\n");
    printf("Executes commands from a configuration file.\n");

    // Display options
    printf("Options:\n");
    printf("  -h\t\tDisplay this help message.\n");
    printf("  -v\t\tDisplays the program version.\n");

    // Display author and license information
    printf("\n%s\n", AUTHOR);
    printf("%s\n\n", LICENSE);
}

void showVersion() {
    printf("Version: %s\n", VERSION);
}


