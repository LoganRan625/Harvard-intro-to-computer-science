#include <cs50.h>    // to call get_int()
#include <stdio.h>   // to call printf()

// declare funcs
int calculate_years(int population, int end);
int size(int lammas);

// start
int main(void)
{
    // declare vars
    int lammas = 0;
    int years;

    // ask user for start size of lamma population
    // as long as start size is less than 9 repeat process
    while (lammas < 9)
    {
        lammas = get_int("Start size: ");
    }

    int end_size = 0;

    // ask user for end size of lamma population
    // as long as end_size is less than the number of lammas, repeat process.
    while (end_size < lammas)
    {
        end_size = get_int("End size: ");
    }

    years = calculate_years(lammas, end_size);

    printf("Years: %i\n", years);
}
// end

int calculate_years(int population, int end) // calculate_years() function, has two integer parameters (population, and end).
{
    // declare vars
    int born;
    int died;
    int years = 0;

    // calculate years until end_size
    while (population < end)
    {
        born = population / 3;
        died = population / 4;
        population = population + born - died;
        years++;
    }
    return years; // returns (number of iterations == years it takes for population == end)
}

