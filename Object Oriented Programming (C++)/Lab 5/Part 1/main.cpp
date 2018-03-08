#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
void readWords();
void countWords();
void outputValues();

class WordCount
{

public:
    string word;
    int occ;
    WordCount(string Word, int Occ)
    {
        word = Word;
        occ = Occ;
    }

    void printf()
    {
        cout << word << "\t\t" << occ << endl;
    }
};

vector<WordCount> mywords;
vector<string> words;

int main()
{
    readWords();
    countWords();
    outputValues();
    return 0;
}

void readWords()
{
    string temp;
    cout << "Enter names separated by space characters. Enter q when finished.\n";
    while (cin >> temp && temp != "q")
    {
        words.push_back(temp) ;
    }
    cout << "Finished" << endl;
}

void countWords()
{
    vector<string> finishedWords;

    // Fetch initial word to test against
    for(vector<string>::const_iterator i = words.begin(); i != words.end(); ++i)
    {
        string tempWord = *i;
        int wordCount = 0;

        // Count all of words in vectr
        for(vector<string>::const_iterator i = words.begin(); i != words.end(); ++i)
        {
            if (tempWord == *i) wordCount++;
        }


        if (find(finishedWords.begin(), finishedWords.end(), tempWord) != finishedWords.end()){
            WordCount newWord = WordCount(tempWord, wordCount);
            mywords.push_back(newWord);
        }

        finishedWords.push_back(tempWord);
    }
}

void outputValues()
{
    vector<WordCount>::iterator i;
    for (i = mywords.begin(); i != mywords.end(); ++i)
    {
        i -> printf();
    }
}
