#include <stdio.h>
#include <stdlib.h>

int main ()
{
    int guess ;
    const int n_s =6 ;
    printf("Guess the number between 1 and 10:\t");
    scanf("%d", &guess);
    while (n_s!= guess)
    {
        if (guess>n_s)
            printf("Too low. Try again:\t ");
        else
            printf("Too high. Try again:\t");
        scanf("%d", &guess);
    }
    printf("Congratulations! You guessed the right number.\t");

    return 0;
}
