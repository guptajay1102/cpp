#include <iostream>
#include <cstring>
using namespace std;
void sortCharacters(char *word)
{
    int len = strlen(word);
    for (int i = 0; i < len - 1; i++)
    {
        for (int j = 0; j < len - i - 1; j++)
        {
            if (word[j] > word[j + 1])
            {
                char temp = word[j];
                word[j] = word[j + 1];
                word[j + 1] = temp;
            }
        }
    }
}

int main()
{
    char *sentence = new char[100000];
    cin.getline(sentence, 10000);

    char *word = strtok(sentence, " ");
    while (word != NULL)
    {
        sortCharacters(word);
        cout << word << " ";
        word = strtok(NULL, " ");
    }

    cout << endl;
    delete sentence;
    return 0;
}
