
#include <cs50.h>        // to call get_int()
#include <stdio.h>       // to call printf()

// Name: mario
// Type: C
// Date: 08/25/21

int staircase(int user_input);

// start
int main(void)
{

    // get integer input between 1-8 if not get input until true
    int user_input = 0;

    while (user_input > 8 || user_input < 1)
    {
        user_input = get_int("choose a number between 1 and 8:\n>");   //store input
    }

    // print staircase
    staircase(user_input);

    // end
    return 0;
}


int staircase(int user_input)
{
    // iter range of user_input. check main() for user input
    int iter = 0;
    for (int A = user_input; A != 0; A--)
    {

        // print spaces
        iter++;
        for (int B = user_input - iter; B > 0; B--)
        {
            printf(" ");
        }

        // print hashes
        for (int C = 0 + iter; C > 0; C--)
        {
            printf("#");
        }
        printf("\n");
    }
    return 0;
}
