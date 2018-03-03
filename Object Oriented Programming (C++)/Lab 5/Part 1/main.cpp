#include <iostream>
#include <vector>

using namespace std;
void readWords();

vector<WordCount> mywords;

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

int main()
{

    readWords();
    return 0;
}

void readWords()
{
    string words;
    while (getline(cin, words) && words.length() )
    {
        mywords.push_back(newWord);
    }
    cout << "Finished" << endl;
}
