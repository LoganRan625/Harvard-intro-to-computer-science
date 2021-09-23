#include <stdio.h> // to use printf()
#include <cs50.h>
#include <math.h> // to use get float?

// Name: cash
// Type: C
// Date: 08/28/2


int count_coins(float amount);

int main(void)
{
    //get user input
    float total = 0;
    while (total <= 0)
    {
        total = get_float("float number: ");
    }

    // figure how few coins it takes to get parameter value; count_couns() initiated before main()
    int total_coins_used = count_coins(total);
    int whole_total = round(total_coins_used);

    // show total number of coins used on terminal
    printf("Total: %i\n", whole_total);
    return 0;
}

// count least amount of coins needed to get paramater value; count_coins() executed in main()
int count_coins(float amount)
{

    
    int num_coins = 0;
    // coin variables
    float quarter = 25;
    float dime = 10;
    float nickle = 5;
    float penny = 1;
    int a = round(amount * 100);
    //printf("[INSIDE] count_coins()\n");
    while (a > 0.00)
    {
        //printf("[INSIDE] count_coins(); while() \n");
        if (a >= quarter)
        {
            //printf("[INSIDE] count_coins; while loop; if, quarters\n");
            a -= quarter;
        }
        else if (a >= dime)
        {
            //printf("[INSIDE] count_coins; while loop; if, dime\n");
            a -=  dime;
        }
        else if (a >= nickle)
        {
            //printf("[INSIDE] count_coins; while loop; if, nickle\n");
            a -= nickle;
        }
        else
        {
            //printf("[INSIDE] count_coins; while loop; if, penny\n");
            a -= penny;
        }
        // each iteration add 1 to the number of coins used
        num_coins++;
    }
    return num_coins;
}
