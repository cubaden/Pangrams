/* Problem #2: Pangrams
 The sentence "A quick brown fox jumps over the lazy dog" contains every single letter in the alphabet.
 Such sentences are called pangrams.You are to write a method getMissingLetters, which takes a String, sentence,
 and returns all the letters it is missing(which prevents it from being a pangram).
 You should ignore the case of the letters in sentence, and your return should be all upper case letters, in alphabetical order. */

#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main(int argc, char** argv)
{
    if (argc < 2)
    {
        cout << "You passed in only " << argc << "argument(s). 3 is needed" << endl;
    }

    string s = argv[1];
    
    std::transform(s.begin(), s.end(), s.begin(), ::toupper);

    string alphabet = "abcdefghijklmnopqrstuvwxyz";

    std::transform(alphabet.begin(), alphabet.end(), alphabet.begin(), ::toupper);


    for (char c : s)
    {
        alphabet.erase(remove(alphabet.begin(), alphabet.end(), c), alphabet.end());
    }

    if (alphabet.length() == 0)
        cout << "yes" << endl;
    else
        cout << "no" << endl;
}
