#include <ctype.h>
#include <cs50.h>
#include <stdio.h>
#include <string.h>

// global lists
int POINTS[] = {1, 3, 3, 2, 1, 4, 2, 4, 1, 8, 5, 1, 3, 1, 1, 3, 10, 1, 1, 1, 1, 4, 4, 8, 4, 10};
char ALPHABET[] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};

// global vars

int compute_score(string word);

int main(void)
{

    // NEED TO LOWER() get_string() or tolower or whatever its called
    string word1 = get_string("Player 1: ");
    string word2 = get_string("Player 2: "); // get user_input as string

    int score1 = compute_score(word1);
    int score2 = compute_score(word2);   // use functions and stor output in scrore variables

    // which score is higher

    if (score1 > score2)
    {
        printf("Player 1 wins\n");
    }
    else if (score1 < score2)
    {
        printf("Player 2 wins\n");   //: Print the winner
    }
    else if (score1 == score2)
    {
        printf("Tie!");
    }

}

int compute_score(string word)
{

    // vars
    int iter = 0;
    int score = 0;
    char letter;

    for (int i = 0; i <= sizeof(word); i++) // loops length of word
    {
        letter = word[i];
        //  FOR each LETTER in ALPHABET iterate
        for (int a = 0; a <= sizeof(ALPHABET); a++)
        {
            if (tolower(letter) == ALPHABET[a])
            {
                // ERROR; fixed replaced "iter++" with "a++"
                score += POINTS[a];
            }

        }
        // forloop end
    }
    // return value
    return score;
}

