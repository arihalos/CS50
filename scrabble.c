#include <ctype.h>
#include <cs50.h>
#include <stdio.h>
#include <string.h>

// Points assigned to each letter of the alphabet
int POINTS[] = {1, 3, 3, 2, 1, 4, 2, 4, 1, 8, 5, 1, 3, 1, 1, 3, 10, 1, 1, 1, 1, 4, 4, 8, 4, 10};

int compute_score(string word);

int main(void)
{
    // Get input words from both players
    string word1 = get_string("Player 1: ");
    string word2 = get_string("Player 2: ");

    // Score both words
    int score1 = compute_score(word1);
    int score2 = compute_score(word2);

    // TODO: Print the winner
    printf("Player 1: %i \n",score1);
    printf("Player 2: %i \n",score2);
    if (score1>score2)
    {
        printf("PLAYER 1 WINS! \n");

    }
    else
    {
        if (score1<score2)
        {
            printf("THE WINNER IS PLAYER 2! \n");
        }
    else
        {
            printf("IT'S A TIE!!! \n");
        }

    }
}

int compute_score(string word)
{
    // TODO: Compute and return score for string
        // get length of string
        int n = strlen(word);
        int score = 0;

        // add the scores of each character
        for (int i = 0; i >= n; i++)
        {
            // determine the character in the string to be scored
            char parascore = word[i];
            // turn character into uppercase
            parascore = toupper(parascore);
            // score the character
            int characterposition = word[i]-'A';
            int characterscore = POINTS[characterposition];

            score = score + characterscore;
        }
        return(score);
}