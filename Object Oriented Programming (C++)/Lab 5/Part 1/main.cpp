#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class WordCount {
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
        cout << word << "\t\t Num:" << occ << endl;
    }
};

void readWords();
void countWords();
void outputValues();
bool sortObjects(WordCount &w1, WordCount &w2);

vector<WordCount> mywords;
vector<string> words;
vector<string> finishedWords;

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
    cout << endl;
}

void countWords()
{
    // Fetch initial word to test against
    for(vector<string>::const_iterator i = words.begin(); i != words.end(); ++i)
    {
        string tempWord = *i;
        int wordCount = 0;

        // Count all of words in vector
        for(vector<string>::const_iterator i = words.begin(); i != words.end(); ++i)
        {
            if (tempWord == *i) wordCount++;
        }

        // Only add the new object if the word hasn't been counted before
        if (find(finishedWords.begin(), finishedWords.end(), tempWord) == finishedWords.end())
        {
            WordCount newWord = WordCount(tempWord, wordCount);
            mywords.push_back(newWord);
        }

        finishedWords.push_back(tempWord);
    }
}

void outputValues()
{
    // Sort
    sort(mywords.begin(), mywords.end(), sortObjects);

    // Output to terminal
    vector<WordCount>::iterator i;
    for (i = mywords.begin(); i != mywords.end(); ++i)
    {
        i -> printf(); // Calls printf function on the WordCount instance
    }
}

bool sortObjects (WordCount &w1, WordCount &w2)
{
    return w1.occ > w2.occ;
}
