#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>

using namespace std;

string the_man[7];
the_man = "";

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

int main()
{

    string word_ans = genWordAns();
    string word_guess = fillWord(word_ans.length(), "_");;
    string character_guess = "";


    while (1)
    {
        if (system("CLS"))
            system("clear");

        // cout << "ans:" << word_ans << endl;

        cout << "Hangman Game ..." << endl;

        // word_guess = compareCharacter(character_guess, word_guess, word_ans);
        word_guess = compareString(character_guess, word_guess, word_ans);

        printStr(word_guess);

        if(word_guess == word_ans){
            cout << "You are safe !" << endl;
            break;
        }

        cout << "guess a character or a word: ";
        cin >> character_guess;
    }

    return 0;
}