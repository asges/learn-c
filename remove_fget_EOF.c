/* Example code modified from Practical C Programming, 3rd ed by Steve Oualline
 *
 * The program displays prompts in the terminal, asking a user to enter their
 * first and last name. 
 * The program then displays the first and last name in a full sentence.
 *
 * Goal is to use common string library functions, as well as fgets.
 */

#include <stdio.h>
#include <string.h>

void create_full_name(char *, char *, char *);
void get_user_input(char *, char *);
void trim_fgets_EOF(char *);

int main(int argc, char **argv) 
{
    char first[50];
    char last[50];
    char full_name[100];

    char first_prompt[50] = "Enter first name:";
    char second_prompt[50] = "Enter last name:";

    get_user_input(first_prompt, first);
    get_user_input(second_prompt, last);

    create_full_name(full_name, first, last);

    printf("Your name is %s.\n", full_name);
    return 0;
}

void create_full_name(char *full_name, char *first_name, char *last_name)
{
    strcpy(full_name, first_name);
    strcat(full_name, " ");
    strcat(full_name, last_name);

}

void get_user_input(char *prompt, char *input)
{
    puts(prompt);
    fgets(input, sizeof(input), stdin);
    trim_fgets_EOF(input);
}

void trim_fgets_EOF(char *input_string) {
    input_string[strlen(input_string)-1] = '\0';
}
