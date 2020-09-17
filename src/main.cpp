#include "main.h"

int main()
{

    string word_ans = genWordAns();
    string word_guess = fillWord(word_ans.length(), "_");

    string character_guess = "";
    int loop = 0;

    while (1)
    {
        if (system("CLS"))
            system("clear"); //clear terminal

        // cout << "ans:" << word_ans << endl;

        cout << "Hangman Game ..." << endl;

        word_guess = compareString(character_guess, word_guess, word_ans);

        printStr(word_guess);

        cout << the_man[loop];
        if (word_guess == word_ans)
        {
            cout << "You are safe !" << endl;
            break;
        }

        if (loop < 7)
            loop++;
        else
            cout << "You are dead !" << endl;

        cout << "guess a character or a word: ";
        cin >> character_guess;
    }

    return 0;
}