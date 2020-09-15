#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>

using namespace std;

string generateWord()
{

    srand(time(0));

    const string wordList[4] = {"icecream",
                                "computer", "dictionary", "algorithm"};

    string word_ans = wordList[rand() % 4];

    return word_ans;
}

void printString(string str)
{
    for (int i = 0; i < str.length(); i++)
    {
        cout << str[i] << " ";
    }
    cout << endl;
}

int main()
{

    string word_ans = generateWord();
    cout << word_ans << endl;

    cout << "Hangman Game ..." << endl;
    cout << word_ans.length() << " character" << endl;

    string word_guess;
    for (int i = 0; i < word_ans.length(); i++)
    {
        word_guess.append("_");
    }

    while (1)
    {

        string character_guess;
        // for(int i=0; i<word_ans.length(); i++){
        //     cout << "_ ";
        // }
        // cout << endl;

        for (int i = 0; i < word_ans.length(); i++)
        {
            if (character_guess[0] == word_ans[i])
                word_guess[i] = character_guess[0];
        }

        printString(word_guess);

        cout << "guess a character or a word: ";
        cin >> character_guess;
        cout << character_guess << endl;
    }

    return 0;
}