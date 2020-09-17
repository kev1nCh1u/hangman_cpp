#ifndef KEVIN_HANGMAN
#define KEVIN_HANGMAN

#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>

using namespace std;

namespace kevin_hangman
{

    string fillWord(int num, string c);

    string genWordAns();

    void printStr(string str);

    string compareCharacter(string character_guess, string word_guess, string word_ans);

    string compareString(string character_guess, string word_guess, string word_ans);

}; // namespace kevin_hangman

#endif