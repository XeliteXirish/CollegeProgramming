#include <iostream>
#include <vector>

using namespace std;
void readWords();
void countWords();

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
        cout << word << " " << occ << endl;
    }
};

vector<WordCount> mywords;
vector<string> words;

int main()
{
    readWords();
    countWords();
    return 0;
}

void readWords()
{
    string temp;
    cout << "Enter names separated by space characters. Enter q when finished.\n";
    while (cin >> temp && temp != "q") {
            words.push_back(temp) ;
    }
    cout << "Finished" << endl;
}

void countWords() {
    // Fetch initial word to test against
    for(vector<string>::const_iterator i = words.begin(); i != words.end(); ++i) {
        string tempWord = *i;
        int wordCount = 0;

        // Count all of words in vectr
        for(vector<string>::const_iterator i = words.begin(); i != words.end(); ++i) {
            if (tempWord == *i) wordCount++;
        }

        WordCount newWord = WordCount(tempWord, wordCount);
        mywords.push_back(newWord);
        newWord.printf();
    }
}

void outputValues() {
    for(vector<WordCount>::const_iterator i = mywords.begin(); i != mywords.end(); ++i) {

        }
}
