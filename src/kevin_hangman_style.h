#ifndef KEVIN_HANGMAN_STYLE
#define KEVIN_HANGMAN_STYLE

#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>

using namespace std;

namespace kevin_hangman_style
{

    string the_man[8] = {
        "\n\n\
    --------     \n\
    |      |     \n\
    |            \n\
    |            \n\
    |            \n\
    |            \n\
    |            \n\
--------------\n\n",
        "\n\n\
    --------     \n\
    |      |     \n\
    |      O     \n\
    |            \n\
    |            \n\
    |            \n\
    |            \n\
--------------\n\n",
        "\n\n\
    --------     \n\
    |      |     \n\
    |      O     \n\
    |      |     \n\
    |            \n\
    |            \n\
    |            \n\
--------------\n\n",
        "\n\n\
    --------     \n\
    |      |     \n\
    |      O     \n\
    |     /|     \n\
    |            \n\
    |            \n\
    |            \n\
--------------\n\n",
        "\n\n\
    --------     \n\
    |      |     \n\
    |      O     \n\
    |     /|\\   \n\
    |            \n\
    |            \n\
    |            \n\
--------------\n\n",
        "\n\n\
    --------     \n\
    |      |     \n\
    |      O     \n\
    |     /|\\   \n\
    |      |     \n\
    |            \n\
    |            \n\
--------------\n\n",
        "\n\n\
    --------     \n\
    |      |     \n\
    |      O     \n\
    |     /|\\   \n\
    |      |     \n\
    |     /      \n\
    |            \n\
--------------\n\n",
        "\n\n\
    --------     \n\
    |      |     \n\
    |      O     \n\
    |     /|\\   \n\
    |      |     \n\
    |     / \\   \n\
    |            \n\
--------------\n\n"};
};

#endif