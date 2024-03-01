#include <shell.h>
/**
 * main - A program that displays a prompt and
 * waits for user to type a command
 * Return :  1
*/

void displayPrompt(const char *inp){
    write(STDOUT_FILENO, inp, strlen(inp));
}


