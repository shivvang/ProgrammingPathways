#include <iostream>
using namespace std;

class trieNode
{
public:
    char data;
    trieNode *children[26];
    bool isTerminal;

    trieNode(char ch)
    {
        this->data = ch;
        for (int i = 0; i < 26; i++)
        {
            children[i] = NULL;
        }

        this->isTerminal = false;
    }
};

void insertWord(trieNode *root, string str)
{
    if (str.length() == 0)
    {
        root->isTerminal = true;
        return;
    }

    char ch = str[0];
    int index = ch - 'A';
    trieNode *child;

    if (root->children[index] != NULL)
    {
        child = root->children[index];
    }
    else
    {
        child = new trieNode(ch);
        root->children[index] = child;
    }

    insertWord(child, str.substr(1));
}

// searching in trie
bool imSearching(trieNode *root, string str)
{
    if (str.length() == 0)
    {
        return root->isTerminal;
    }

    char ch = str[0];
    int index = ch - 'a';
    trieNode *child;

    if (root->children[index] != NULL)
    {
        child = root->children[index];
    }
    else
    {
        return false;
    }

    imSearching(child, str.substr(1));
}

// deletion homework
void deletingStuff(trieNode *root, string str)
{
    if (root->isTerminal == true)
    {
        root->isTerminal = false;
        return;
    }

    char ch = str[0];
    int index = ch - 'a';
    trieNode *child;

    if (root->children[index] != NULL)
    {
        child = root->children[index];
    }

    deletingStuff(child, str.substr(1));
}

int main()
{
    trieNode *root = new trieNode('-');

    insertWord(root, "coding");
    insertWord(root, "codehelp");
    insertWord(root, "coder");
    insertWord(root, "cod");
    insertWord(root, "clashOfClans");
    insertWord(root, "charmander");
    insertWord(root, "charizard");

    if (imSearching(root, "coder"))
    {
        cout << "present";
    }
    else
    {
        false;
    }

    return 0;
}