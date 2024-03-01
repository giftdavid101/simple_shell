#include <shell.h>

/**
 * main - A program that displays a prompt and
 * waits for user to type a command
 * Return :  1
*/

void display_prompt(void)
{
displayUserInp("$");
}



int main(void)
{
char command[120];

while (1)
{
display_prompt();

}

}