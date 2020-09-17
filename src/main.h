#ifndef MAIN
#define MAIN

#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>

// #include "kevin_hangman.h"
#include "kevin_hangman_style.h"

using namespace std;
// using namespace kevin_hangman;
using namespace kevin_hangman_style;

///////////////////////////////////////////////////////
string fillWord(int num, string c)
{
    string word_guess;
    for (int i = 0; i < num; i++)
    {
        word_guess.append(c);
    }
    return word_guess;
}

string genWordAns()
{
    srand(time(0));

    const string wordList[4] = {"icecream",
                                "computer", "dictionary", "algorithm"};

    string word_ans = wordList[rand() % 4];

    return word_ans;
}

void printStr(string str)
{
    for (int i = 0; i < str.length(); i++)
    {
        cout << str[i] << " ";
    }
    cout << endl;
}

string compareCharacter(string character_guess, string word_guess, string word_ans)
{

    for (int i = 0; i < word_ans.length(); i++)
    {
        if (character_guess[0] == word_ans[i])
            word_guess[i] = character_guess[0];
    }
    return word_guess;
}

string compareString(string character_guess, string word_guess, string word_ans)
{
    for (int i = 0; i < word_ans.length(); i++)
    {
        if (word_ans.compare(i, character_guess.length(), character_guess) == 0 && character_guess.length() > 0)
        {
            // word_guess[i] = character_guess[0];
            word_guess.replace(i, character_guess.length(), character_guess);
        }
    }
    return word_guess;
}

#endif